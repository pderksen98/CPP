#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <utility> //swap

class ClapTrap
{
	private:
	std::string	_name;
	unsigned	_hitPoints;
	unsigned	_energyPoints;
	unsigned	_attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap &other);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif