#ifndef _HUMANB_HPP
# define _HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*      _weapon;
		std::string _name;
	public:
		void attack(void);
		void setWeapon(Weapon& weapon);
		HumanB(std::string name);
		~HumanB(void);
} ;

#endif