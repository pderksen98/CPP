#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << GREEN << _name << ": " << PLAIN << "attacks with their " << CYAN << _weapon.getType() << PLAIN << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) :
    _weapon(weapon)
{
    std::cout << YELLOW << "HumanA constructed!" << PLAIN << std::endl;
    _name = name;
}

HumanA::~HumanA(void)
{
    std::cout << RED << "HumanA destructed!" << PLAIN << std::endl;
}
