#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN << "Cat constructor" << PLAIN << std::endl;
	this->setType("Cat");
	_brain = new Brain();
}

Cat::~Cat(){
	std::cout << RED << "Cat destructor" << PLAIN << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) {
	std::cout << GREEN << "Cat copy constructor" << PLAIN << std::endl;
	*this = other;
}

const Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment operator" << std::endl;
	this->setType(other.getType());
	// this->_brain = other._brain; //shallow copy
	this->_brain = new Brain(*other.getBrain()); //deep copy
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaauw" << std::endl;
}


Brain	*Cat::getBrain(void) const {
	return (_brain);
}

std::ostream &operator<<(std::ostream &out, const Cat &cat)
{
	out << cat.getType() << std::endl;
	return (out);
}
