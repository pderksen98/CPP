#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor" << std::endl;
	this->setType("Dog");
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
}

const Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog copy assignment operator" << std::endl;
	this->setType(other.getType());
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOEF WOEF!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Dog &dog)
{
	out << dog.getType() << std::endl;
	return (out);
}
