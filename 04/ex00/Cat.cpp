#include "Cat.hpp"

Cat::Cat(){
	std::cout << CYAN << "Cat" << PLAIN << " constructed" << std::endl;
	this->set_type("Cat");
}

Cat::~Cat(){
	std::cout << CYAN << "Cat" << PLAIN <<  " destructed" << std::endl;
}

Cat::Cat(const Cat& other){
	std::cout << CYAN << "Cat" << PLAIN << " copy constructor" << std::endl;
	*this = other;
}

const Cat&	Cat::operator=(const Cat& other){
	std::cout << "Cat copy assignment operator";
	this->set_type(other.get_type());
	return (*this);
}

std::string	Cat::make_sound() const{
	return ("Miaauw");
}