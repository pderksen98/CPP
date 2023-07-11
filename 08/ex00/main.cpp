#include <iostream>
#include <vector>
// #include <algorithm>
#include "easyfind.hpp"

int main()
{
    //C++11 feature to use initializer list
    // std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    try {
        std::vector<int>::iterator result = easyfind(numbers, 3);
        std::cout << "Value found at position " << std::distance(numbers.begin(), result) << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator result = easyfind(numbers, 6);
        std::cout << "Value found at position " << std::distance(numbers.begin(), result) << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}
