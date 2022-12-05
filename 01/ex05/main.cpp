#include "Harl.hpp"

void    Harl::complain(std::string level)
{

}

int main(void)
{
    Harl harl;

    void(*function)() = Harl::complain(level);
    harl.complain()
    return (0);
}
