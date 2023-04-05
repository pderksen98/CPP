#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#define PLAIN "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;92m"

class Brain
{
    private:
    std::string ideas[100];

    public:
    // Constructors
    Brain();
    Brain(const Brain& other);
    // Destructor
    ~Brain();
    // Operators
    const Brain &operator=(const Brain& other);
    // Member functions
    void        setIdea(int index, std::string newIdea);
    std::string getIdea(int index);
};

#endif