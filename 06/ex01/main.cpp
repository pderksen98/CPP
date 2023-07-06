#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer() {}
Serializer::Serializer(Serializer const& src) { *this = src; }
Serializer::~Serializer() {}
Serializer& Serializer::operator=(Serializer const& rhs) {
    if (this != &rhs) {}
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data* ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}

int main(void) {
    Serializer  s;
    Data        data;
    data.str = "Hello World";
    data.x = 42;

    uintptr_t   raw;
    Data*       ptr;

    raw = s.serialize(&data);
    ptr = s.deserialize(raw);

    std::cout << ptr->str << std::endl;
    std::cout << ptr->x << std::endl;

    return 0;
}
