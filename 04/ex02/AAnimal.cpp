#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << GREEN << "Default AAnimal constructor\n" << PLAIN;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << GREEN << "Type AAnimal constructor\n" << PLAIN;
}

AAnimal::~AAnimal() {
	std::cout << RED << "AAnimal destructor" << PLAIN << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	std::cout << GREEN << "AAnimal copy constructor called\n" << PLAIN;
	*this = other;
}

const AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "AAnimal copy asingment operator called\n";
	this->_type = other._type;
	return (*this);
}

// void	AAnimal::setType(std::string type) {
// 	_type = type;
// }

void	AAnimal::makeSound(void) const {
	std::cout << "Random AAnimal sound" << std::endl;
}

std::string	AAnimal::getType(void) const {
	return (_type);
}
