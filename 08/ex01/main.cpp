#include "Span.hpp"
# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"


int main(void) 
{
    try {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    } catch (std::runtime_error &e) {
        std::cout << RED << "Error: " << PLAIN << e.what() << std::endl;
    }

    // try {
    //     Span    sp(40);
    //     sp.addMany(20);
    //     std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
    //     std::cout << "longest span : " << sp.longestSpan() << std::endl;
    // } catch (std::runtime_error &e) {
    //     std::cout << RED << "Error: " << PLAIN << e.what() << std::endl;
    // }

 

    return (0);
}