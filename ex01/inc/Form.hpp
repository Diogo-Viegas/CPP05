#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
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
        //member functions
        void beSigned(const Bureaucrat &person);
        //getters
        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
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
        ~Form();
};
std::ostream &operator<<(std::ostream &os, Form const &form);

#endif