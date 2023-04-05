#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN << "Brain default constructor" << PLAIN << std::endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = std::string(); //constructor of std::string creates empty string
    }
}

Brain::Brain(const Brain& other)
{
    std::cout << GREEN << "Brain copy constructor" << PLAIN << std::endl;
    *this = other;
}

const Brain &Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator" << std::endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << RED << "Brain destructor" << PLAIN << std::endl;
}

void    Brain::setIdea(int index, std::string newIdea)
{
    if (index < 0 || index > 99)
        return;
    this->ideas[index] = newIdea;
}

std::string Brain::getIdea(int index)
{
    if (index < 0 || index > 99)
        return ("");
    return (this->ideas[index]);
}
