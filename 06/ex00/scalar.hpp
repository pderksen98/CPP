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

class scalarConverter {
    private:
        scalarConverter();
    public:
        scalarConverter(scalarConverter const& src);
        ~scalarConverter();
        scalarConverter& operator=(scalarConverter const& rhs);
        static void convert(std::string& input);
} ;

e_scalar getType(std::string& str);

#endif