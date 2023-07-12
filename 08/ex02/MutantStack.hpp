#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack<T>& other);
        MutantStack& operator=(const MutantStack<T>& other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) 
{std::cout << "copy constructor" << std::endl;}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
    std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (std::stack<T>::c.end());
}

#endif
