#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
// {
// 	std::cout << "Default ScavTrap is " << GREEN << "constructed" << PLAIN << std::endl;
// 	std::cout << "\nBefore initializeing name =\t\t" << this->_name << std::endl;
// 	std::cout << "Before initializeing hitPoints =\t" << this->_hitPoints << std::endl;
// 	std::cout << "Before initializeing energyPoints =\t" << this->_energyPoints << std::endl;
// 	std::cout << "Before initializeing attackDamage =\t" << this->_attackDamage << std::endl << std::endl; 

// 	this->_name = name;
// 	this->_hitPoints = 100;
// 	this->_energyPoints = 50;
// 	this->_attackDamage = 20;

// 	std::cout << "After initializeing name =\t\t" << this->_name << std::endl;
// 	std::cout << "After initializeing hitPoints = \t" << this->_hitPoints << std::endl;
// 	std::cout << "After initializeing energyPoints =\t" << this->_energyPoints << std::endl;
// 	std::cout << "After initializeing attackDamage =\t" << this->_attackDamage << std::endl << std::endl; 
// }


// ScavTrap::ScavTrap()
// {
// 	std::cout << "Default ScavTrap is " << GREEN << "constructed" << PLAIN << std::endl;
// 	std::cout << "\nBefore initializeing name =\t\t" << this->_name << std::endl;
// 	std::cout << "Before initializeing hitPoints =\t" << this->_hitPoints << std::endl;
// 	std::cout << "Before initializeing energyPoints =\t" << this->_energyPoints << std::endl;
// 	std::cout << "Before initializeing attackDamage =\t" << this->_attackDamage << std::endl << std::endl; 

// 	this->_name = "Default";
// 	this->_hitPoints = 100;
// 	this->_energyPoints = 50;
// 	this->_attackDamage = 20;

// 	std::cout << "After initializeing name =\t\t" << this->_name << std::endl;
// 	std::cout << "After initializeing hitPoints = \t" << this->_hitPoints << std::endl;
// 	std::cout << "After initializeing energyPoints =\t" << this->_energyPoints << std::endl;
// 	std::cout << "After initializeing attackDamage =\t" << this->_attackDamage << std::endl << std::endl; 
// }


int main(void)
{
	// ScavTrap					*piet = new ScavTrap("Piet");
	// piet->attack("Jantje");
	// piet->attack("Jantje");
	// piet->attack("Jantje");
	// piet->attack("Jantje");
	// delete						piet;

	// ScavTrap					tim("Tim");
	// tim.attack("koen");
	// tim.attack("koen");
	// tim.attack("koen");
	// tim.attack("koen");
	// tim.attack("koen");

	// ScavTrap	Empty;

	ScavTrap	Tango("Tango");
	Tango.guardGate();


	return (0);
}
