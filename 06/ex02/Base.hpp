#ifndef BASE_HPP
#define BASE_HPP

class Base {
    public:
    //Virtual destructor is needed to avoid undefined behavior
    //when deleting a derived class object through a pointer to base class
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif