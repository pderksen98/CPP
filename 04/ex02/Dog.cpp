#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << GREEN << "Dog constructor\n" << PLAIN;
	_brain = new Brain();
}

Dog::~Dog(){
	std::cout << RED << "Dog destructor\n" << PLAIN;
	delete _brain;
}

Dog::Dog(const Dog &other){
	std::cout << GREEN << "Dog copy constructor\n" << PLAIN;
	this->_brain = new Brain();
	*this = other;
}

const Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog copy assignment operator\n";
	Animal::operator=(other);
	// this->_brain = other._brain; //shallow copy
	*this->_brain = *other._brain; //deep copy
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOEF WOEF!" << std::endl;
}

void	Dog::addIdea(const std::string& idea) {
	_brain->addIdea(idea);
}

void	Dog::printIdeas() const {
	_brain->printIdeas();
}

Brain	*Dog::getBrain() const {
	return (_brain);
}
