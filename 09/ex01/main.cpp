#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>
#include <stdexcept>

# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"

int    parseAndMakeCalculation(const std::string& inputString) {
    std::stack<int>     intStack;
    std::istringstream  iss(inputString);

    std::string         token;
    while (iss >> token) {
        if (token.length() > 1) {
            throw std::runtime_error("Invalid input : " + token);
        }
        char    charToAdd = token[0];
        if (isdigit(charToAdd)) {
            int number = charToAdd - '0';
            intStack.push(number);
        } else if (charToAdd == '*' || charToAdd == '/' || charToAdd == '+' || charToAdd == '-') {
            if (intStack.size() < 2)
                throw std::runtime_error("Not enough operands on the stack");
            int b = intStack.top();
            intStack.pop();
            int a = intStack.top();
            intStack.pop();
            int c;
            if (charToAdd == '*')
                c = a * b;
            else if (charToAdd == '/')
                c = a / b;
            else if (charToAdd == '+')
                c = a + b;
            else if (charToAdd == '-')
                c = a - b;
            intStack.push(c);
        } else {
            throw std::runtime_error("Invalid character : " + std::string(1, charToAdd));
        }
    }
    return (intStack.top());
}


int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cerr << RED << "Error: " << PLAIN << "not correct number of arguments given : expected 1\n";
        return (1);
    }
    std::string inputString = argv[1];
    try {
        int result = parseAndMakeCalculation(inputString);
        std::cout << result << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        return (1);
    }
    return (0);
}
