#include "../inc/Intern.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
Intern::Intern()
{

}
Intern::Intern(const Intern& copy)
{
    (void) copy;
}
Intern& Intern::operator=(const Intern& obj)
{
    (void) obj;
    return (*this);
}
Intern::~Intern()
{

}
AForm* Intern::makeForm(const std::string form_name, const std::string form_target)
{
    int i = 0;
    std::string availableForms[] = {"PresidentialPardonForm","RobotomyRequestForm","ShrubberyCreationForm"};
    while(i < 3 && form_name != availableForms[i])
        i++;
    switch(i)
    {
        case (0):
            std::cout << "Intern creates " << form_name << std::endl;
            return (new PresidentialPardonForm(form_target));
        case(1):
            std::cout << "Intern creates " << form_name << std::endl;
            return (new RobotomyRequestForm(form_target));
        case(2):
            std::cout << "Intern creates " << form_name << std::endl;
            return (new ShrubberyCreationForm(form_target));
        default:
            std::cout << "Form not found" << std::endl;
            return (NULL);

    }
}