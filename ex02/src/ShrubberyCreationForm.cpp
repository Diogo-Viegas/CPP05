#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP
#include "AForm.hpp"
#inc
class  ShrubberyCreationForm:public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
    
};

#endif