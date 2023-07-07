#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T> 
class Array {
    private:
        T*              _array;
        unsigned int    _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        T& operator[](unsigned int i);
        unsigned int size(void) const;
};

template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
    std::cout << "Constructor called" << std::endl;
    return ;
}

template<typename T>
Array<T>::Array(const Array& other) : _array(new T[other._size]), _size(other._size) {
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = other._array[i];
    return ;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] this->_array;
        this->_array = new T[other._size];
        this->_size = other._size;
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = other._array[i];
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    std::cout << "Destructor called" << std::endl;
    delete[] this->_array;
    return ;
}

template<typename T>
T& Array<T>::operator[](unsigned int i) {
    if (i >= this->_size)
        throw std::out_of_range("Index out of range");
    return this->_array[i];
}

template<typename T>
unsigned int Array<T>::size(void) const {
    return this->_size;
}


#endif