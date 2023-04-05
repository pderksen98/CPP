#include "Brain.hpp"

Brain::Brain() : _index(0) {
    std::cout << GREEN << "Brain default constructor\n" << PLAIN;
}

Brain::Brain(const Brain& other) {
    std::cout << GREEN << "Brain copy constructor\n" << PLAIN;
    *this = other;
}

Brain::~Brain() {
    std::cout << RED << "Brain destructor\n" << PLAIN;
}

const Brain &Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator\n";
    this->_index = other._index;
    for (int i = 0; i < _index; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

void    Brain::addIdea(std::string newIdea) {
    _ideas[_index] = newIdea;
    _index++;
    if (_index > MAX_IDEAS)
        _index = MAX_IDEAS;
}

void    Brain::printIdeas() {
    for (int i = 0; i < _index; i++)
        std::cout << "[" << i << "]: " << _ideas[i] << std::endl;
}
