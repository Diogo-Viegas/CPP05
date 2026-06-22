#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "../inc/Intern.hpp"

int main()
{
    
std::cout << "=========================================" << std::endl;
    std::cout << "            TESTING EX03: INTERN         " << std::endl;
    std::cout << "=========================================" << std::endl;

    Intern someRandomIntern;
    Bureaucrat boss("President", 1);
    AForm* form;

    
    std::cout << "\n--- Test 1: Successful Robotomy Creation ---" << std::endl;
    form = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    if (form) {
        std::cout << *form;
        boss.signForm(*form);
        boss.executeForm(*form);
        delete form;
    }


    std::cout << "\n--- Test 2: Successful Shrubbery Creation ---" << std::endl;
    form = someRandomIntern.makeForm("ShrubberyCreationForm", "backyard");
    if (form) {
        boss.signForm(*form);
        delete form;
    }


    std::cout << "\n--- Test 3: Successful Pardon Creation ---" << std::endl;
    form = someRandomIntern.makeForm("PresidentialPardonForm", "Marvin");
    if (form) {
        boss.signForm(*form);
        delete form;
    }

    std::cout << "\n--- Test 4: Invalid Form Name (Should handle nicely) ---" << std::endl;
    form = someRandomIntern.makeForm("coffee request", "Boss");
    if (form == NULL) {
        std::cout << "Safe fallback verified: Pointer is NULL." << std::endl;
    } else {
        std::cout << "Failure: Received an invalid object!" << std::endl;
        delete form;
    }
    return (0);
}
