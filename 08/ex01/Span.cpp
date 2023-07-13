#include "Span.hpp"

Span::Span() : _maxSize(0), _span(){
	throw std::runtime_error("Pass max span size (unsigned int) to the contsructor");
}

Span::Span(unsigned int N) : _maxSize(N), _span() {
}

Span::~Span() {
}

Span::Span(const Span& other) {
	*this = other;
}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_span = other._span;
	}
	return (*this);
}

void	Span::addNumber(const int newNumber) {
	if (this->_span.size() == this->_maxSize)
		throw std::runtime_error("Span is already full");
	this->_span.push_back(newNumber);
}

unsigned int	Span::shortestSpan() {
	if (this->_span.size() < 2)
		throw std::runtime_error("At least 2 numbers needed to check shortest Span");
	unsigned int 		shortestSpan = std::numeric_limits<unsigned int>::max();
	std::sort(this->_span.begin(), this->_span.end());
	for (size_t i = 1; i < this->_span.size(); i++) {
		unsigned int span = static_cast<unsigned int>(this->_span[i]) - static_cast<unsigned int>(this->_span[i - 1]);
		if (span < shortestSpan)
			shortestSpan = span;
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan() {
	if (this->_span.size() < 2)
		throw std::runtime_error("At least 2 numbers needed to check longest span");
	std::sort(this->_span.begin(), this->_span.end());
    unsigned int longestSpan = static_cast<unsigned int>(this->_span.back()) - static_cast<unsigned int>(this->_span.front());
	return (longestSpan);
}

void Span::addVector(std::vector<int> vec) {
	if (vec.size() + this->_span.size() > this->_maxSize)
		throw std::runtime_error("Not enough free elements in span");
	this->_span.insert(this->_span.end(), vec.begin(), vec.end());
}
