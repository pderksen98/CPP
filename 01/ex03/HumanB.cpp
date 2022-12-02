#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void    HumanB::attack(void)
{
	std::cout << GREEN << _name << ": " << PLAIN << "attacks with their " << CYAN << _weapon->getType() << PLAIN << std::endl;
}

HumanB::HumanB(std::string name)
{
    std::cout << YELLOW << "HumanB constructed!" << PLAIN << std::endl;
	_name = name;
}

HumanB::~HumanB(void)
{
	std::cout << RED << "HumanB destructed!" << PLAIN << std::endl;
}
