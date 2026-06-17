#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern& copy);
        Intern&operator=(const Intern& obj);
        ~Intern();
        AForm* makeForm(const std::string form_name, const std::string form_target);
};

#endif