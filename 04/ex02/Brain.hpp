#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#define PLAIN "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;92m"

#define MAX_IDEAS 100

class Brain
{
    private:
    std::string _ideas[MAX_IDEAS];
    int         _index;

    public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    const Brain &operator=(const Brain& other);

    void    addIdea(std::string newIdea);
    void    printIdeas();
};

#endif