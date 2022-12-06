#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << GREEN << name << ": " << RED << "Destructed" << PLAIN << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << YELLOW << "Constructor" << PLAIN << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << GREEN << name << ": " << PLAIN << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string newName)
{
	name = newName;
}
