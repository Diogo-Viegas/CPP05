#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
    std::cout << "--- Teste 1: Sucesso ao assinar ---" << std::endl;
    Bureaucrat john("John", 10);
    Form formA("Formulário A", 50, 20);

    std::cout << formA << std::endl;
    john.signForm(formA);
    std::cout << formA << std::endl;

    std::cout << "\n--- Teste 2: Falha por nota insuficiente ---" << std::endl;
    Bureaucrat bob("Bob", 140);
    Form formB("Formulário B", 50, 20);

    std::cout << formB << std::endl;
    bob.signForm(formB); 
    std::cout << formB << std::endl;

   
    std::cout << "\n--- Teste 3: Criação de formulário inválido ---" << std::endl;
    try {
        Form formInvalido("Erro", 0, 155);
    }
    catch (const std::exception &e) {
        std::cerr << "Exceção apanhada: " << e.what() << std::endl;
    }

    return (0);
}