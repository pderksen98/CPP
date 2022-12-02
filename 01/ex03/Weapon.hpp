#ifndef _WEAPON_HPP
# define _WEAPON_HPP
# include <iostream>

# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"
# define GREEN "\033[1;92m"
# define RED "\033[0;31m"
# define CYAN "\033[0;36m"

class Weapon
{
    private:
        std::string _type;
    public:
        const   std::string& getType();
        void    setType(std::string type);
        Weapon(std::string type);
        Weapon();
        ~Weapon();
} ;

#endif