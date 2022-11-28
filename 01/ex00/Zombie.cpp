#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << GREEN << name << RED << ": Destructed" << PLAIN << std::endl;
	// return ;
}

Zombie::Zombie(void)
{
	std::cout << "Constructer called" << std::endl;
	// return ;
}

void	Zombie::announce(void)
{
	std::cout << GREEN << name << PLAIN << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string newName)
{
	name = newName;
}
