#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat constructor" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = other;
}

const WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat copy assignment operator" << std::endl;
	this->setType(other.getType());
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Miaauw" << std::endl;
}
