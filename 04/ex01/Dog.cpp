#include "Dog.hpp"

Dog::Dog(){
	std::cout << GREEN << "Dog constructor" << PLAIN << std::endl;
	this->setType("Dog");
	_brain = new Brain();
}

Dog::~Dog(){
	std::cout << RED << "Dog destructor" << PLAIN << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other){
	std::cout << GREEN << "Dog copy constructor" << PLAIN << std::endl;
	*this = other;
}

const Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog copy assignment operator" << std::endl;
	this->setType(other.getType());
	this->_brain = other._brain;
	// this->_brain = new Brain(*other._brain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOEF WOEF!" << std::endl;
}

Brain	*Dog::getBrain(void) const{
	return (_brain);
}

std::ostream &operator<<(std::ostream &out, const Dog &dog)
{
	out << dog.getType() << std::endl;
	return (out);
}
