#include "Bureaucrat.hpp"

int main(void)
{
    //test 1
	std::cout << "Creating bureaucrat with grade 1:" << std::endl;
    try
    {
        Bureaucrat b1("Alice", 1);
        std::cout << b1;
        std::cout << "Incrementing grade of Alice:" << std::endl;
        b1.incrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    //test 2
    std::cout << "\nCreating bureaucrat with grade 150:" << std::endl;
    try
    {
        Bureaucrat b2("Bob", 150);
        std::cout << b2;
        std::cout << "Decrementing grade of Bob:" << std::endl; 
        b2.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    //test 3
    std::cout << "\nCreating bureaucrat with grade 0:" << std::endl;
    try
    {        
        Bureaucrat b3("Charlie", 0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
        
    //test 4
    std::cout << "\nCreating bureaucrat with grade 151:" << std::endl;
    try
    {        Bureaucrat b4("Dave", 151);
    }
    catch (const std::exception &e)  
    {
        std::cerr << e.what() << std::endl;     
    }
    //test 5
    std::cout << "\nCreating bureaucrat with grade 75:" << std::endl;
    try
    {        Bureaucrat b5("Eve", 75);
        std::cout << b5;
        std::cout << "Incrementing grade of Eve:" << std::endl;
        b5.incrementGrade();
        std::cout<< "Eve Grade : " << b5.getGrade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

}
