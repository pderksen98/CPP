#include <iostream>
#include "Array.hpp"



int main(void) {
    Array<int>   array(3);

    array[2] = 42;
    std::cout << array[2] << std::endl;
    try {
        std::cout << array[3] << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << array[-1] << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    Array<int>  copy = array;
    std::cout << copy[2] << std::endl;
    copy[0] = -21;
    std::cout << copy[0] << std::endl;


    Array<char> charArray(10);
    for (unsigned int i = 0; i < charArray.size(); i++)
        charArray[i] = 'a' + i;
    for (unsigned int i = 0; i < charArray.size(); i++)
        std::cout << charArray[i] << std::endl;
    //Uncaught exception: 
    // std::cout << charArray[10] << std::endl;
    return (0);
}
