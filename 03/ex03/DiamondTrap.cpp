#include "DiamondTrap.hpp"
#include "colors.hpp"

// class DiamondTrap : public ScavTrap, public FragTrap
// {
// 	private:
// 	std::string	_name;

// 	public:
// 	DiamondTrap();
// 	DiamondTrap(std::string name);
// 	DiamondTrap(const DiamondTrap& other);
// 	~DiamondTrap();

// 	DiamondTrap&	operator=(const DiamondTrap& other);

// 	void	attack(const std::string& target);
// 	void	whoAmI(void);
// } ;


//check what is in empty
DiamondTrap::DiamondTrap()
{
	std::cout << "ClapTrap::_name = " << ClapTrap::_name << std::endl;
	std::cout << "ClapTrap::_hitPoints = " << ClapTrap::_hitPoints << std::endl;
	std::cout << "ClapTrap::_energyPoints = " << ClapTrap::_energyPoints << std::endl;
	std::cout << "ClapTrap::_attackDamage = " << ClapTrap::_attackDamage << std::endl << std::endl;

	std::cout << "ScavTrap::_name = " << ScavTrap::_name << std::endl;
	std::cout << "ScavTrap::_hitPoints = " << ScavTrap::_hitPoints << std::endl;
	std::cout << "ScavTrap::_energyPoints = " << ScavTrap::_energyPoints << std::endl;
	std::cout << "ScavTrap::_attackDamage = " << ScavTrap::_attackDamage << std::endl << std::endl;

	std::cout << "FragTrap::_name = " << FragTrap::_name << std::endl;
	std::cout << "FragTrap::_hitPoints = " << FragTrap::_hitPoints << std::endl;
	std::cout << "FragTrap::_energyPoints = " << FragTrap::_energyPoints << std::endl;
	std::cout << "FragTrap::_attackDamage = " << FragTrap::_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "destructed" << PLAIN << std::endl;
}