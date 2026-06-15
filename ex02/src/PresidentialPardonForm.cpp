//equired grades: sign 25, exec 5
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm",25,5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):AForm("PresidentialPardonForm",25,5), _target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
    *this = copy;
};
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    _target = obj._target;
    setIsSigned(obj.getSigned());
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::performAction() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}