#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string& type) : _type(type){
	std::cout << "Type WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

const WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other){
	std::cout << "WrongAnimal copy asingment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void	WrongAnimal::setType(std::string type){
	_type = type;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "Random WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (_type);
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &wronganimal){
	out << wronganimal.getType() << std::endl;
	return (out);
}
