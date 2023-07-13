#include "Span.hpp"
# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"

int	randomInt(void) {
    return (rand() % 10000);
}

//C - style way of returning a random vector but this is just for convinience and not part of the exercise
//C++11 way would be to use std::generate_n using the randomInt function, <random> header
std::vector<int>	getRandomVector(int N) {
    std::srand(std::time(nullptr));
	std::vector<int> randomVector;
    for (int i = 0; i < N; i++)
        randomVector.push_back(randomInt());
	return (randomVector);
}


int main(void) 
{
    try {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(std::numeric_limits<int>::max());
        // sp.addNumber(std::numeric_limits<int>::min());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::runtime_error &e) {
        std::cout << RED << "Error: " << PLAIN << e.what() << std::endl;
    }
    // try {
    //     Span sp = Span(400);
    //     sp.addNumber(1);
    //     sp.addNumber(2);
    //     sp.addNumber(3);
    //     sp.addNumber(4);
    //     sp.addNumber(5);

    //     std::vector<int> newVec = getRandomVector(395);
    //     sp.addVector(getRandomVector(395));
    //     std::cout << "Longest span: " << sp.longestSpan() << "     Shortest span: " << sp.shortestSpan() << std::endl;
    // } catch (std::runtime_error &e) {
    //     std::cout << RED << "Error: " << PLAIN << e.what() << std::endl;
    // }
    return (0);
}
