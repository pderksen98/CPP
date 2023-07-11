#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
typename T::iterator    easyfind(T& container, int value) 
{
    typename T::iterator it = container.begin();
    while (it != container.end()) {
        if (*it == value)
            return it;
        it++;
    }
    throw std::runtime_error("Could not find int value in container");
}

// template <typename T>
// typename T::iterator easyfind(T &container, int value)
// {
//     typename T::iterator it = std::find(container.begin(), container.end(), value);
//     if (it == container.end())
//         throw std::runtime_error("Could not find int value in container");
//     return it;
// }


#endif