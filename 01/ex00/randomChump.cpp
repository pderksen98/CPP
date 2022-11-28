#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  new_Zombie;

    new_Zombie.giveName(name);
    new_Zombie.announce();
}
