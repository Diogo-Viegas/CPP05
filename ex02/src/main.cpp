#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    PresidentialPardonForm p("Diogo");
    Bureaucrat ze("ze",2);
    ze.signForm(p);
    ze.executeForm(p);
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