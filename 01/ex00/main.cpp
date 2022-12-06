/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pieterderksen <pieterderksen@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 18:28:29 by pieterderks   #+#    #+#                 */
/*   Updated: 2022/12/06 14:20:31 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Anouncing Zombies\n\n";
    
    std::cout << "New zombie 'Lars' with 'randomChump':" << std::endl;
    randomChump("Lars");
    
    
    Zombie  *n_zom;
    std::cout << "\nNew zombie 'Bjorn' with 'newZombie':" << std::endl;
    n_zom = newZombie("Bjorn");
    n_zom->announce();
    delete n_zom;
    return (0);
}