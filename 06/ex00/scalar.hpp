#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <string>


typedef enum scalar
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
} e_scalar;

e_scalar getType(std::string& str);


#endif