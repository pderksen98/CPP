#include <iostream>
#include <string>
#include "whatever.hpp"
# define YELLOW "\033[0;33m"
# define CYAN "\033[1;36m"
# define PLAIN "\033[0m"


int main() 
{
    int a = 2;
    int b = 3;

  
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << YELLOW << "::swap( a, b )" << PLAIN << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << CYAN << "::min(a, b) = " << PLAIN << ::min(a, b) << std::endl;
    std::cout << CYAN << "::max(a, b) = " << PLAIN << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "\nc = " << c << ", d = " << d << std::endl;
    std::cout << YELLOW << "::swap( c, d )" << PLAIN << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << CYAN << "::min(c, d) = " << PLAIN << ::min(c, d) << std::endl;
    std::cout << CYAN <<"::max(c, d) = " << PLAIN << ::max(c, d) << std::endl;

    return 0;
}
