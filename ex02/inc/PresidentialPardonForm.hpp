#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class  PresidentialPardonForm:public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
    
};

#endif