#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
	Bureaucrat person("John", 10);
	Form form("01",50,20);

	std::cout << form << std::endl;
	try
	{
		form.beSigned(person);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	person.signForm(form);

	std::cout << form << std::endl;
	return (0);
}