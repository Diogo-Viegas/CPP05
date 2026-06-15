#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form default constructor called" << std::endl;
}
Form::Form(const std::string &name, int signGrade, int executeGrade) : _name(name), _isSigned(false), _gradeToSign(signGrade), _gradeToExecute(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form parameterized constructor called" << std::endl;
}
Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
}
Form &Form::operator=(const Form &other)
{
    std::cout << "Form copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        _isSigned = other._isSigned;
    }
    return *this;
}

void Form::beSigned(const Bureaucrat &person) 
{
    if(person.getGrade() <= _gradeToSign)
    {
        _isSigned = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}
std::string Form::getName() const
{
    return _name;
}
bool Form::getSigned() const
{
    return _isSigned;
}
int Form::getSignGrade() const
{
    return _gradeToSign;
}
int Form::getExecuteGrade() const
{
    return _gradeToExecute;
}
const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}
std::ostream &operator<<(std::ostream &os,  Form const &form)
{
    os << "Name: " << form.getName() << "\n Signed: " << form.getSigned() << "\n Grade to Sign: " << form.getSignGrade() << "\n Grade to Execute:" << form.getExecuteGrade() << std::endl;
    return (os); 
}
Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}