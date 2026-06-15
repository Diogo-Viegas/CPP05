#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
#include "AForm.hpp"
class  RobotomyRequestForm:public AForm
{
    private:
        std::string _target;
        void run() const;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

	    class RobotizationFailed : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};

        ~RobotomyRequestForm();
    
};

#endif