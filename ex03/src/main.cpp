#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "../inc/Intern.hpp"

int main()
{
    
std::cout << "=========================================================" << std::endl;
    std::cout << "          INITIALIZING BUREAUCRATS FOR TESTING           " << std::endl;
    std::cout << "=========================================================" << std::endl;
    Bureaucrat boss("President Zaphod", 1);
    Bureaucrat manager("Middle Manager", 45);
    Bureaucrat intern("Useless Intern", 150);

    std::cout << boss;
    std::cout << manager;
    std::cout << intern;


    std::cout << "\n=========================================================" << std::endl;
    std::cout << "          TEST 1: SHRUBBERY CREATION FORM               " << std::endl;
    std::cout << "          (Requires: Sign 145, Exec 137)                 " << std::endl;
    std::cout << "=========================================================" << std::endl;
    
    // Target: "garden" -> Should create a file named garden_shrubbery
    ShrubberyCreationForm shrub("garden");
    std::cout << shrub;

    // Scenario A: Attempt to execute without being signed (Should fail!)
    std::cout << "\n-> Attempting execution without signature:" << std::endl;
    manager.executeForm(shrub);

    // Scenario B: Intern tries to sign (Should fail! Grade 150 < 145)
    std::cout << "\n-> Intern tries to sign:" << std::endl;
    intern.signForm(shrub);

    // Scenario C: Manager signs and executes (Should succeed!)
    std::cout << "\n-> Manager tries to sign and execute:" << std::endl;
    manager.signForm(shrub);
    manager.executeForm(shrub);


    std::cout << "\n=========================================================" << std::endl;
    std::cout << "          TEST 2: ROBOTOMY REQUEST FORM                 " << std::endl;
    std::cout << "          (Requires: Sign 72, Exec 45)                     " << std::endl;
    std::cout << "=========================================================" << std::endl;
    
    RobotomyRequestForm robot("Bender");
    std::cout << robot;

    // Scenario A: Boss signs the form
    boss.signForm(robot);

    // Scenario B: Execute multiple times to test the 50% randomized probability
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

    // Scenario A: Manager tries to sign (Should fail! Grade 45 < 25)
    std::cout << "\n-> Manager tries to sign:" << std::endl;
    manager.signForm(pardon);

    // Scenario B: Boss signs, but Manager tries to execute (Should fail! Grade 45 < 5)
    std::cout << "\n-> Boss signs, but Manager tries to execute:" << std::endl;
    boss.signForm(pardon);
    manager.executeForm(pardon);

    // Scenario C: Boss executes (Should succeed!)
    std::cout << "\n-> Boss executes the pardon:" << std::endl;
    boss.executeForm(pardon);
       std::cout << "\n=========================================================" << std::endl;
       std::cout << "          TEST 4: INTERNS                              " << std::endl;
       std::cout << "          (Requires: Sign 25, Exec 5)                      " << std::endl;
       std::cout << "=========================================================" << std::endl;
    
    Intern i;
    AForm newForm = i.makeForm("PresidentialPardonForm","hello");

    std::cout << "\n=========================================================" << std::endl;
    std::cout << "          END OF TESTING - CLEANING UP MEMORY            " << std::endl;
    std::cout << "=========================================================" << std::endl;

    return (0);
}
