#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor" << std::endl;
	this->setType("Cat");
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

const Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment operator" << std::endl;
	this->setType(other.getType());
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaauw" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Cat &cat)
{
	out << cat.getType() << std::endl;
	return (out);
}
