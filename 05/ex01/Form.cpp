#include "Form.hpp"

Form::Form(std::string const name, int const signGrade, int const excuteGrade)
	: name(name), signGrade(signGrade), excuteGrade(excuteGrade)
{
	isSigned = false;

	if (signGrade < 1 || excuteGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || excuteGrade > 150)
		throw Form::GradeTooLowException();
}
Form::~Form() { }


std::string Form::getName() const
{
	return (this->name);
}
bool Form::IsSigned() const
{
	return (this->isSigned);
}
int Form::getSignGrade() const
{
	return (this->signGrade);
}
int Form::getExcuteGrade() const
{
	return (this->excuteGrade);
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: grade too High";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: grade too Low";
}


void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}


std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " form is " << form.IsSigned() << " signed, Sign : "
	<< form.getSignGrade() << ", Excute : " << form.getExcuteGrade();
	return (out);
}