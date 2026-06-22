//Required grades: sign 145, exec 137
#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	_target = other._target;
	setIsSigned(other.getSigned());
	return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}


void ShrubberyCreationForm::run() const
{
	std::ofstream outFile((_target + std::string("_shrubbery")).c_str());

	if (outFile)
	{
	    outFile << "       #\n"
                << "      ###\n"
                << "     #####\n"
                << "    #######\n"
                << "   #########\n"
                << "  ###########\n"
                << " #############\n"
                << "       |\n"
                << "       |\n";

		outFile.close();
	}
	else
		throw ShrubberyCreationForm::OpenFileException();
		
}

const char *ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return ("Could not open and write the file!");
}