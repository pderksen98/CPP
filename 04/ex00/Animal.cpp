#include "Animal.hpp"

Animal::Animal(){
	std::cout << YELLOW << "Animal" << PLAIN << " constructed" << std::endl;
	type = "";
}

Animal::~Animal(){
	std::cout << YELLOW << "Animal" << PLAIN << " destructed" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << YELLOW << "Animal" << PLAIN << " copy constructor" << std::endl;
	*this = other;
}

const Animal&	Animal::operator=(const Animal& other){
	std::cout << YELLOW << "Animal" << PLAIN << " copy asingment operator" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Animal::set_type(std::string Type){
	type = Type;
}

std::string	Animal::make_sound(void) const{
	return ("");
}

std::string	Animal::get_type(void) const{
	return (type);
}
