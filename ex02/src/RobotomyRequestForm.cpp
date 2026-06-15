//Required grades: sign 72, exec 45

#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib> 

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm",72,45),_target("default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequestForm",72,45), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
    *this = copy;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    _target = obj._target;
    setIsSigned(obj.getSigned());
    return (*this);
}

void  RobotomyRequestForm::run() const
{
    if(rand() % 2)
        std::cout << "Bzzzzzzzt! " << _target << " has been robotomized!" << std::endl; 
    else
        throw RobotizationFailed();
}
const char *RobotomyRequestForm::RobotizationFailed::what() const throw()
{
	return ("Robotomy failed :(");
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}