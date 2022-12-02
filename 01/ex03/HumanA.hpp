#ifndef _HUMANA_HPP
# define _HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&      _weapon;
        std::string _name;
    public:
        void attack(void);
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
} ;

#endif