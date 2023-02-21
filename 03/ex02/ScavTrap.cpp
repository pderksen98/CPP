#include "ScavTrap.hpp"
#include "colors.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "Default ScavTrap is " << GREEN << "constructed" << PLAIN << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->_name == "Default"){
		std::cout << "Default ScavTrap is " << RED << "destructed" << PLAIN << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " is " << RED << "destructed" << PLAIN << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "Copy constructor called. ScavTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "Copy assignment operator called. ScavTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " has no energy left to attack " << CYAN << target << "\t\t" << PLAIN;
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " has no hit points left to attack " << CYAN << target << PLAIN;
	else {
		this->_energyPoints--;
		std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " attacks " << CYAN << target << PLAIN << ", causing " << RED << this->_attackDamage << PLAIN << " points of damage! ";
	}
	std::cout << "\t(" << GREEN << this->_energyPoints << PLAIN << " energy points and " << GREEN << this->_hitPoints << PLAIN << " hit points remaining)" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << CYAN << this->_name << PLAIN << " is now in Gate keeper mode" << std::endl;
}