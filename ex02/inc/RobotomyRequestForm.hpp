#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
#include "AForm.hpp"
class  RobotomyRequestForm:public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
    
};

#endif