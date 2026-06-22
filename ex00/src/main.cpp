#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "=========================================" << std::endl;
    std::cout << "         TESTING EX00: BUREAUCRAT        " << std::endl;
    std::cout << "=========================================" << std::endl;


    std::cout << "\n--- Test 1: Valid Instantiations ---" << std::endl;
    try
    {
        Bureaucrat high("John",1);
        Bureaucrat low("Mary",150);
        std::cout << high;
        std::cout << low;
    }catch(const std::exception &e)
    {
        std::cerr << "Exception -> " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 2: Grade Too High ---" << std::endl;
    try
    {
        Bureaucrat invalidHigh("Peter",0);
        std::cout << invalidHigh << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Expected Exception -> " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 3: Grade Too Low ---" << std::endl;
    try
    {
        Bureaucrat invalidLow("Jess",151);
        std::cout << invalidLow << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Expected Exception -> "<< e.what() << '\n';
    }

    std::cout << "\n--- Test 4: Over-Incrementing Grade 1 ---" << std::endl;
    try
    {
        Bureaucrat max("Bryan",1);
        std::cout << max << std::endl;
        std::cout << "Attempting to increment Bryan's grade... " << std::endl;
        max.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Expected Exception -> "<< e.what() << '\n';
    }

    std::cout << "\n--- Test 5: Over-Decrementing Grade 150 ---" << std::endl;
    try
    {
        Bureaucrat min("Leo",150);
        std::cout << min << std::endl;
        std::cout << "Attempting to decrement Leo's grade... " << std::endl;
        min.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Expected Exception -> " << e.what() << '\n';
    }
    return (0);
}
