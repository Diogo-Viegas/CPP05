#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    
std::cout <<"=========================================================" << std::endl;
    std::cout << "          INITIALIZING BUREAUCRATS FOR TESTING           " << std::endl;
    std::cout << "=========================================================" << std::endl;
    Bureaucrat boss("President Zaphod", 1);
    Bureaucrat manager("Middle Manager", 45);
    Bureaucrat intern("Useless Intern", 150);

    std::cout << boss;
    std::cout << manager;
    std::cout << intern;


    std::cout <<  "\n=========================================================" << std::endl;
    std::cout << "          TEST 1: SHRUBBERY CREATION FORM               " << std::endl;
    std::cout << "          (Requires: Sign 145, Exec 137)                 " << std::endl;
    std::cout << "========================================================="  << std::endl;
    

    ShrubberyCreationForm shrub("garden");
    std::cout << shrub;


    std::cout << "\n-> Attempting execution without signature:" << std::endl;
    manager.executeForm(shrub);

    std::cout << "\n-> Intern tries to sign:" << std::endl;
    intern.signForm(shrub);

    std::cout << "\n-> Manager tries to sign and execute:" << std::endl;
    manager.signForm(shrub);
    manager.executeForm(shrub);


    std::cout << "\n=========================================================" << std::endl;
    std::cout << "          TEST 2: ROBOTOMY REQUEST FORM                 " << std::endl;
    std::cout << "          (Requires: Sign 72, Exec 45)                     " << std::endl;
    std::cout << "=========================================================" << std::endl;
    
    RobotomyRequestForm robot("Bender");
    std::cout << robot;

    
    boss.signForm(robot);

   
    std::cout << "\n-> Executing robotomy 4 times to check randomness:" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "\n--- Attempt " << i + 1 << " ---" << std::endl;
        boss.executeForm(robot);
    }


    std::cout << "\n=========================================================" << std::endl;
    std::cout << "          TEST 3: PRESIDENTIAL PARDON FORM              " << std::endl;
    std::cout << "          (Requires: Sign 25, Exec 5)                      " << std::endl;
    std::cout << "=========================================================" << std::endl;
    
    PresidentialPardonForm pardon("Local Criminal");
    std::cout << pardon;

    
    std::cout << "\n-> Manager tries to sign:" << std::endl;
    manager.signForm(pardon);

    
    std::cout << "\n-> Boss signs, but Manager tries to execute:" << std::endl;
    boss.signForm(pardon);
    manager.executeForm(pardon);

   
    std::cout << "\n-> Boss executes the pardon:" << std::endl;
    boss.executeForm(pardon);


    return (0);
}
