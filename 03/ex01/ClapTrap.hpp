#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <utility> //swap
# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"
# define RED "\033[1;31m"
# define LESS_RED "\033[0;31m"
# define GREEN "\033[1;92m"
# define CYAN "\033[1;36m"

class ClapTrap
{
	private:
	std::string	_name;
	unsigned	_hitPoints;
	unsigned	_energyPoints;
	unsigned	_attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap &other);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif