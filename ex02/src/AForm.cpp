#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    //std::cout << "AAForm default constructor called" << std::endl;
}
AForm::AForm(const std::string &name, int signGrade, int executeGrade) : _name(name), _isSigned(false), _gradeToSign(signGrade), _gradeToExecute(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw AForm::GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    //std::cout << "AAForm copy constructor called" << std::endl;
}
AForm &AForm::operator=(const AForm &other)
{
    //std::cout << "AForm copy assignment operator called" << std::endl;
    if (this != &other) 
    {
        _isSigned = other._isSigned;
    }
    return *this;
}

void AForm::beSigned(const Bureaucrat &person) 
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
std::string AForm::getName() const
{
    return _name;
}
bool AForm::getSigned() const
{
    return _isSigned;
}
int AForm::getSignGrade() const
{
    return _gradeToSign;
}
int AForm::getExecuteGrade() const
{
    return _gradeToExecute;
}
void AForm::setIsSigned(bool is_signed)
{
    _isSigned = is_signed;
}
void AForm::execute(Bureaucrat const & executor) const
{
    if(_isSigned == false)
    {
        throw IsNotSignedException();
    }
    if(_gradeToExecute < executor.getGrade())
    {
        throw GradeTooLowException();
    }
    run();
}
const char* AForm::IsNotSignedException::what() const throw()
{
    return ("The form is not signed!");
}
const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}
std::ostream &operator<<(std::ostream &os,  AForm const &AForm)
{
    os << "Name: " << AForm.getName() << "\nSigned: " << AForm.getSigned() << "\nGrade to Sign: " << AForm.getSignGrade() << "\nGrade to Execute: " << AForm.getExecuteGrade() << std::endl;
    return (os); 
}
AForm::~AForm()
{
    //std::cout << "AForm destructor called" << std::endl;
}