#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	stacky("Stacky");
	FragTrap	*heapy = new FragTrap("Heapy");

	stacky.attack("Jonas");
	stacky.attack("Quint");

	heapy->highFivesGuys();

	(void)heapy;
	delete heapy;

	return (0);
}
