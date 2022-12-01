#ifndef _HUMANA_HPP
# define _HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void    attack(void);
        HumanA(std::string name, Weapon weapon);
        ~HumanA();
} ;


class HumanB
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void attack(void);
        HumanB(std::string name);
        ~HumanB();
} ;


#endif