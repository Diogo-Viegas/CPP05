#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
        virtual void run() const = 0;
    public:
        AForm();
        AForm(const AForm& copy);
        AForm(const std::string &name, int signGrade, int executeGrade);
        AForm&operator=(const AForm& obj);
        //member functions
        void beSigned(const Bureaucrat &person);
        //getters
        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        void setIsSigned(bool is_signed);
        virtual void execute(Bureaucrat const & executor) const;
        // Exceptions
        class IsNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

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
        virtual ~AForm();
};
std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif