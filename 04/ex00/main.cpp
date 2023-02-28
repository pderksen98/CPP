#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	animal;
	Cat		cat;

	std::cout << "Animal->get_type() = " << animal.get_type() << std::endl;
	std::cout << "Animal->make_sound() = " << animal.make_sound() << std::endl;
	std::cout << "Cat->get_type() = " << cat.get_type() << std::endl;
	std::cout << "Cat->make_sound() = " << cat.make_sound() << std::endl;

	return (0);
}