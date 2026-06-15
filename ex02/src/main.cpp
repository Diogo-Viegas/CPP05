#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    

    PresidentialPardonForm p("Diogo");
    RobotomyRequestForm robot("R2D2");
    ShrubberyCreationForm f("hello");

    Bureaucrat ze("ze",2);
    ze.signForm(f);
    ze.executeForm(f);
    // ze.signForm(p);
    // ze.executeForm(p);
    // ze.signForm(robot);
    // ze.executeForm(robot);
    // ze.executeForm(robot);
    // ze.executeForm(robot);
    // ze.executeForm(robot);
    ze.executeForm(f);
    try
    {
        p.execute(ze);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    

    return (0);
}