#include <iostream>

// class Base {
//     public:
//         Base() {}
//         virtual ~Base() {}
// };

// class Derived : public Base {
//     public:
//         Derived() {}
//         ~Derived() {}
// };

// class AnotherClass : public Base {
//     public:
//         AnotherClass() {}
//         ~AnotherClass() {}
// };

// int main2()
// {
//     double value = 5.25;
    
//     double a = (int)value + 5.3;                //C style cast  
//     double s = static_cast<int>(value) + 5.3;  //static cast

//     // double s = reinterpret_cast<AnotherClass*>(&value); //reinterpret cast
     

//     Derived* derived = new Derived();
//     Base* base = derived;

//     AnotherClass* ac = dynamic_cast<AnotherClass*>(base );

//     std::cout << a << std::endl;
//     std::cout << s << std::endl;
//     return 0;
// }

int* test()
{
    int x = new(sizeof(int));
    *x = 4;
    std::cout << "addres of int is: " << &x << std::endl;
    return (x);
}

int main() {
    int *check = test();
    std::cout << "addres of int is: " << check << std::endl;
    std::cout << *check << std::endl;

   return (0);
}