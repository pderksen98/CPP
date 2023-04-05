#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	std::cout << GREEN << "Cat constructor\n" << PLAIN;
	_brain = new Brain();
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor\n" << PLAIN;
	delete _brain;
}

Cat::Cat(const Cat &other) {
	std::cout << GREEN << "Cat copy constructor\n" << PLAIN;
	this->_brain = new Brain();
	*this = other;
}

const Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment operator\n";
	AAnimal::operator=(other);
	// this->_brain = other._brain; //shallow copy
	*this->_brain = *other._brain; //deep copy
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaauw" << std::endl;
}

void	Cat::addIdea(const std::string& idea) {
	_brain->addIdea(idea);
}

void	Cat::printIdeas() {
	_brain->printIdeas();
}

Brain	*Cat::getBrain() const {
	return (_brain);
}
