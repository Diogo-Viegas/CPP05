#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
    std::cout << "=========================================" << std::endl;
    std::cout << "            TESTING EX01: FORM           " << std::endl;
    std::cout << "=========================================" << std::endl;

    std::cout << "\n--- Test 1: Form Grade Too High ---" << std::endl;
    try {
        Form badForm("Secret Document", 0, 50);
    } catch (const std::exception &e) {
        std::cerr << "Expected exception-> " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 2: Successful Signing ---" << std::endl;
    try {
        Bureaucrat boss("Zaphod", 10);
        Form taxForm("Tax Return", 45, 45);

        std::cout << taxForm;
        boss.signForm(taxForm);
        std::cout << taxForm; 
    } catch (const std::exception &e) {
        std::cerr << "Unexpected Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 3: Failed Signing (Grade Too Low) ---" << std::endl;
    try {
        Bureaucrat intern("Arthur", 140);
        Form crucialForm("Crucial Contract", 50, 20);

        std::cout << crucialForm;
        intern.signForm(crucialForm); 
        std::cout << crucialForm;
    } catch (const std::exception &e) {
        std::cerr << "Unexpected Uncaught Exception: " << e.what() << std::endl;
    }

    return (0);
}