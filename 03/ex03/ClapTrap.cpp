#include "ClapTrap.hpp"
#include "colors.hpp"

ClapTrap::ClapTrap()
: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap is " << GREEN << "constructed" << PLAIN << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (this->_name == "Default")
		std::cout << "Default Claptrap is " << GREEN << "constructed" << PLAIN << std::endl;
	else
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned hit, unsigned energy, unsigned attack)
: _name(name), _hitPoints(hit), _energyPoints(energy), _attackDamage(attack)
{
	if (this->_name == "Default")
		std::cout << "Default Claptrap is " << GREEN << "constructed" << PLAIN << std::endl;
	else
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->_name == "Default"){
		std::cout << "Default ClapTrap is " << RED << "destructed" << PLAIN << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " is " << RED << "destructed" << PLAIN << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called. ClapTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl; 
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called. ClapTrap " << CYAN << other._name << PLAIN << " is " << GREEN << "constructed" << PLAIN << std::endl; 
	// std::swap(*this, other);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " has no energy left to attack " << CYAN << target << "\t\t" << PLAIN;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " has no hit points left to attack " << CYAN << target << PLAIN;
	else {
		this->_energyPoints--;
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " attacks " << CYAN << target << PLAIN << ", causing " << RED << this->_attackDamage << PLAIN << " points of damage! ";
	}
	std::cout << "\t(" << GREEN << this->_energyPoints << PLAIN << " energy points and " << GREEN << this->_hitPoints << PLAIN << " hit points remaining)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " has no energy left to repaire itself\t";
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " has no hit points left to repaire itself\t";
	else {
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " repairs itself and gains " << GREEN << amount << PLAIN << " hit points\t";
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	std::cout << "\t(" << GREEN << this->_energyPoints << PLAIN << " energy points and " << GREEN << this->_hitPoints << PLAIN << " hit points remaining)" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " already has 0 hitpoints\t\t\t";
	else {
		if (amount > this->_hitPoints){
			amount = this->_hitPoints;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints -= amount;
		std::cout << "ClapTrap " << CYAN << this->_name << PLAIN << " gets attacked and loses " << RED << amount << PLAIN << " hit points!\t";
	}
	std::cout << "\t(" << GREEN << this->_energyPoints << PLAIN << " energy points and " << GREEN << this->_hitPoints << PLAIN << " hit points remaining)" << std::endl;
}
