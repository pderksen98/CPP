#include "iter.hpp"

// int main(void)
// {
//     int array[] = {1, 2, 3, 4, 5};
//     iter(array, 5, ::print<int>);
    
//     std::cout << std::endl;

//     char array2[] = {'a', 'b', 'c', 'd', 'e'};
//     iter(array2, 5, ::print<char>);
//     return 0;
// }

template<typename T>
void print(const T& x) {
    std::cout << x << std::endl;
}

template<typename T> 
void square(T& x) {
    x *= x;
}


int main(void) {
    const char      const_char_array[] = {'a', 'b', 'c', 'd', 'e'};
    int             int_array[] = {1, 2, 3, 4, 5};
    const double    const_double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "const char array: " << std::endl;
    ::iter(const_char_array, 5, print);
    // ::iter<char>(const_char_array, 5, ::print);
    // iter(const_char_array, 5, ::print<char>);

    std::cout << "int array: " << std::endl;
    iter(int_array, 5, square);
    iter(int_array, 5, print);

    std::cout << "const double array: " << std::endl;
    iter(const_double_array, 5, print);
    return 0;
}
