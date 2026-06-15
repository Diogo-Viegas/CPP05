#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    

    PresidentialPardonForm p("Diogo");
    RobotomyRequestForm robot("R2D2");
    Bureaucrat ze("ze",2);
    ze.signForm(p);
    ze.executeForm(p);
    ze.signForm(robot);
    ze.executeForm(robot);
    ze.executeForm(robot);
    ze.executeForm(robot);
    ze.executeForm(robot);
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