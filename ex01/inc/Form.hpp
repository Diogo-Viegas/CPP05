#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        Form(const Form& copy);
        Form(const std::string &name, int signGrade, int executeGrade);
        Form&operator=(const Form& obj);
        ~Form();
        //getters
        std::string getName();
        bool getSigned();
        int getSignGrade();
        int getExecuteGrade();
        // Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &os, Form const &other);

#endif