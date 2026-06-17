#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP
#include "AForm.hpp"
#include <fstream>
class  ShrubberyCreationForm:public AForm
{
    private:
        std::string _target;
        void run() const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        class OpenFileException : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};
        ~ShrubberyCreationForm();
    
};

#endif