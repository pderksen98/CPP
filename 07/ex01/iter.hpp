#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void iter(T array[], size_t len, void (*function)(T&)) {
    for (size_t i = 0; i < len; i++)
        function(array[i]);
}

template<typename T>
void iter(const T arr[], size_t len, void (*function)(const T&)) {
    for (size_t i = 0; i < len; i++)
        function(arr[i]);
}

#endif