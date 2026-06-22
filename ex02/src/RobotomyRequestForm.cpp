//Required grades: sign 72, exec 45

#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib> 

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm",72,45),_target("default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequestForm",72,45), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target)
{
};
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    _target = obj._target;
    setIsSigned(obj.getSigned());
    return (*this);
}

void  RobotomyRequestForm::run() const
{
    std::cout << "* DRILLING NOISES (Brrrrrrrrrrrr!) *" << std::endl;
    if(rand() % 2)
        std::cout << "Bzzzzzzzt! " << _target << " has been robotomized!" << std::endl; 
    else
        std::cout << "Robotomy failed for " << _target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}