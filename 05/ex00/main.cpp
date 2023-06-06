#include "Bureaucrat.hpp"
#include "Colors.hpp"

int main(void) {
    try {
        // Bureaucrat samson("Samson", 151);
        Bureaucrat gert("Gert", 0);
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;
    try {
        Bureaucrat defaultBureaucrat;
        std::cout << defaultBureaucrat;
        defaultBureaucrat.incrementGrade();
        std::cout << defaultBureaucrat;

        defaultBureaucrat.decrementGrade();
        defaultBureaucrat.decrementGrade();
        std::cout << defaultBureaucrat;
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    try {
        Bureaucrat piet("Piet", 1);
        std::cout << piet;
        piet.incrementGrade();
        std::cout << "THIS DOES NOT GET PRINTED" << std::endl;
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;
    try {
        Bureaucrat jan("Jan", 100);
        for (int i = 0; i < 45; i++)
            jan.incrementGrade();
        std::cout << jan;
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;
    try {
        Bureaucrat tim("Tim", 22);
        Bureaucrat klaas("Klaas", 70);
        klaas = tim;
        std::cout << klaas;
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
} 