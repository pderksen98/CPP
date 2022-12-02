#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << YELLOW << "Weapon constructed!" << PLAIN << std::endl;
    _type = "NONE";
}

Weapon::Weapon(std::string type)
{
    std::cout << YELLOW << "Weapon constructed!" << PLAIN << std::endl;
    setType(type);
}

Weapon::~Weapon()
{
    std::cout << RED << "Weapon destructed!" << PLAIN << std::endl;
}

const std::string& Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
    _type = type;
}
