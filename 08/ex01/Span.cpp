#include "Span.hpp"

Span::Span() : _maxSize(0), _span(){
	throw std::runtime_error("Pass max span size (unsigned int) to the contsructor");
}

Span::Span(unsigned int N) : _maxSize(N), _span() {
	std::cout << "Constructor\n";
}

Span::~Span() {
	std::cout << "Destructor\n";
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

void	Span::addNumber(int newNumber) {
	if (this->_span.size() == this->_maxSize)
		throw std::runtime_error("Span is already full");
	this->_span.push_back(newNumber);
}

unsigned int	Span::shortestSpan() {
	if (this->_span.size() < 2)
		throw std::runtime_error("At least 2 numbers needed to check shortest Span");

	std::vector<int>	sortedNumbers = this->_span;
	unsigned int 		shortestSpan = std::numeric_limits<unsigned int>::max();
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	for (size_t i = 1; i < sortedNumbers.size(); i++) {
		unsigned int span = static_cast<unsigned int>(sortedNumbers[i] - sortedNumbers[i - 1]);
		if (span < shortestSpan)
			shortestSpan = span;
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan() {
	if (this->_span.size() < 2)
		throw std::runtime_error("At least 2 numbers needed to check longest span");

	std::vector<int>	sortedNumbers = this->_span;
	unsigned int		longestSpan = 0;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
    longestSpan = sortedNumbers.back() - sortedNumbers.front();
    // longestSpan = sortedNumbers[sortedNumbers.size() - 1] - sortedNumbers[0];
	return (longestSpan);
}


int	randomInt(void) {
    return (rand() % 10000);
}

/* Generates a vector of length N, filled with random values */
std::vector<int>	getRandomVector(int N) {
	std::vector<int> randomVector;
    for (int i = 0; i < N; i++)
        randomVector.push_back(randomInt());
    // std::cout << "Printing random vector : \n";
    // for (size_t i = 0; i < randomVector.size(); i++)
    //     std::cout << randomVector[i] << " ";
    // std::cout << std::endl;
	return (randomVector);
}

void	Span::addMany(int N) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::cout << std::endl;
	if (this->_span.size() + N > this->_maxSize)
		throw std::runtime_error("Not enough free elements in span");	
	std::vector<int> toAppend = getRandomVector(N);
	this->_span.insert(this->_span.end(), toAppend.begin(), toAppend.end());
}
