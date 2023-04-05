#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Type Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

const Animal&	Animal::operator=(const Animal& other){
	std::cout << "Animal copy asingment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void	Animal::setType(std::string type){
	_type = type;
}

void	Animal::makeSound(void) const{
	std::cout << "Random Animal sound" << std::endl;
}

std::string	Animal::getType(void) const{
	return (_type);
}
