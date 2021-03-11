#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
: name(""), signGrade(1), excuteGrade(1)
{
}

Form::Form(std::string const name, int const signGrade, int const excuteGrade)
: name(name), signGrade(signGrade), excuteGrade(excuteGrade), isSigned(false)
{
	if (signGrade < 1 || excuteGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || excuteGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src )
: name(src.name), signGrade(src.signGrade), excuteGrade(src.excuteGrade), isSigned(false)
{
	if (signGrade < 1 || excuteGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || excuteGrade > 150)
		throw Form::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form & Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		this->isSigned = rhs.isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " form is " << form.IsSigned() << " signed, Sign : "
	<< form.getSignGrade() << ", Excute : " << form.getExcuteGrade();
	return (out);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool Form::IsSigned() const
{
	return (this->isSigned);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: grade too High";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: grade too Low";
}
const char* Form::UnsignedFormException::what() const throw()
{
	return "FormException: unsigned Form";
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}
void Form::excute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->excuteGrade)
		throw Form::GradeTooLowException();
	if (!this->isSigned)
		throw Form::UnsignedFormException();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return (this->name);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}
int Form::getExcuteGrade() const
{
	return (this->excuteGrade);
}
