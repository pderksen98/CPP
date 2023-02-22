#include "DiamondTrap.hpp"
#include "colors.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name", 100, 50, 30), _name("Default"){
    std::cout << "Defualt DiamondTrap is " << GREEN << "constructed" << PLAIN << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name, 100, 50, 30), ScavTrap(name), FragTrap(name), _name(name){
    ClapTrap::_name = ClapTrap::_name.append("_clap_name");
    std::cout << "DiamondTrap " << CYAN << this->_name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
}


DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& other)
{
    _name = other._name;
    ClapTrap::_name = other.ClapTrap::_name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "Copy assignment operator called. DiamondTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
   	if (this->_name == "Default"){
		std::cout << "Default DiamondTrap is " << RED << "destructed" << PLAIN << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << CYAN << this->_name << PLAIN << " is " << RED << "destructed" << PLAIN << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "Copy constructor called. DiamondTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
    *this = other;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name = " << CYAN << this->_name << PLAIN << " and my ClapTrap name = " << CYAN << ClapTrap::_name << PLAIN << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
