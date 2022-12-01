#ifndef _WEAPON_HPP
# define _WEAPON_HPP
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType();
        void    setType(std::string newType);
        Weapon()
} ;

const std::string& Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string newType)
{
    type = newType;
}

#endif