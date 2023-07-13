#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator    easyfind(T& container, int value) 
{
    typename T::iterator result = std::find(container.begin(), container.end(), value);
    if (result != container.end())
        return (result);
    throw std::runtime_error("Could not find int value in container");
}

#endif
