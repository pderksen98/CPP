#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*ptr = new Zombie;
	ptr->giveName(name);
	return (ptr);
}
