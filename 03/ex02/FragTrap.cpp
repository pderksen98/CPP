#include "FragTrap.hpp"
#include "colors.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "Default FragTrap is " << GREEN << "constructed" << PLAIN << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
   std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "Copy constructor called. FragTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	if (this->_name == "Default"){
		std::cout << "Default FragTrap is " << RED << "destructed" << PLAIN << std::endl;
		return ;
	}
	std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " is " << RED << "destructed" << PLAIN << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "Copy assignment operator called. FragTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " has no energy left to attack " << CYAN << target << "\t\t" << PLAIN;
	else if (this->_hitPoints == 0)
		std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " has no hit points left to attack " << CYAN << target << PLAIN;
	else {
		this->_energyPoints--;
		std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " attacks " << CYAN << target << PLAIN << ", causing " << RED << this->_attackDamage << PLAIN << " points of damage! ";
	}
	std::cout << "\t(" << GREEN << this->_energyPoints << PLAIN << " energy points and " << GREEN << this->_hitPoints << PLAIN << " hit points remaining)" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << CYAN << this->_name << PLAIN << " gives you a high five!" << std::endl;
}