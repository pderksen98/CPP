#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//SHRUBBERY = 145 sign && 137 exec
//ROBOTOMY = 72 sign && 45 exec
//PRESIDENTIAL = 25 sign && 5 exec

int main()
{
    try {
        std::cout << "-- CASE 1: SHRUBBERY EXECUTION --" << std::endl;
        Bureaucrat president("President", 1);
        ShrubberyCreationForm form("home");
        // president.executeForm(form);
        // president.signForm(form);
        president.signForm(form);
        president.executeForm(form);
    } catch (std::exception& e) {
        std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
        std::cout << e.what() << std::endl;
    }

    // try {
    //     std::cout << "-- CASE 2: CANNOT EXECUTE SHRUBBERY --" << std::endl;
    //     // Bureaucrat visitor("visitor", 147); // also cannot sign
    //     Bureaucrat visitor("visitor", 140);
    //     ShrubberyCreationForm form("home");
    //     visitor.signForm(form);
    //     visitor.executeForm(form);
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << "-- CASE 3: ROBOTOMY EXECUTION --" << std::endl;
    //     Bureaucrat president("President", 1);
    //     RobotomyRequestForm form("home");
    //     president.signForm(form);
    //     president.executeForm(form);
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << "-- CASE 4: CANNOT EXECUTE ROBOTOMY --" << std::endl;
    //     // Bureaucrat visitor("visitor", 78); //also cannot sign
    //     Bureaucrat visitor("visitor", 62);
    //     RobotomyRequestForm form("home");
    //     visitor.signForm(form);
    //     visitor.executeForm(form);
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << "-- CASE 5: PRESIDENTIAL EXECUTION --" << std::endl;
    //     Bureaucrat president("President", 1);
    //     PresidentialPardonForm form("home");
    //     president.signForm(form);
    //     president.executeForm(form);
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << "-- CASE 6: CANNOT EXECUTE PRESIDENTIAL --" << std::endl;
    //     // Bureaucrat visitor("visitor", 26); //also cannot sign
    //     Bureaucrat visitor("visitor", 20);
    //     PresidentialPardonForm form("home");
    //     visitor.signForm(form);
    //     visitor.executeForm(form);
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION ---" << PLAIN << std::endl;
    //     std::cout << e.what() << std::endl;
    // }
}
