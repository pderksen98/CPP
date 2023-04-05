#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << GREEN << "Default Animal constructor\n" << PLAIN;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << GREEN << "Type Animal constructor\n" << PLAIN;
}

Animal::~Animal() {
	std::cout << RED << "Animal destructor" << PLAIN << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << GREEN << "Animal copy constructor called\n" << PLAIN;
	*this = other;
}

const Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Animal copy asingment operator called\n";
	this->_type = other._type;
	return (*this);
}

// void	Animal::setType(std::string type) {
// 	_type = type;
// }

// void	Animal::makeSound(void) const {
// 	std::cout << "Random Animal sound" << std::endl;
// }

std::string	Animal::getType(void) const {
	return (_type);
}
