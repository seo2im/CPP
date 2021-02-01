#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	this->grade = grade;

	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}
Bureaucrat::~Bureaucrat() {}


std::string Bureaucrat::getName() const
{
	return (this->name);
}
int	Bureaucrat::getGrade() const
{
	return (this->grade);
}


void Bureaucrat::increaseGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decreaseGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::signForm(Form &form)
{
	std::cout << "Bureaucrat:" << this->getName();
	if (form.IsSigned())
		std::cout << " signs Form:" << form.getName() << std::endl;
	else
	{
		std::cout << " cannot signs Form:" << form.getName()
		<< " because " << "not yet graded" << std::endl; 
		form.beSigned(*this);
		std::cout << "signed OK!!" << std::endl;
	}
}
void Bureaucrat::executeForm(Form const &form) const
{
	form.excute(*this);
	std::cout << "Bureaucrat:" << this->getName() << " executes Form:" << form.getName() << std::endl;
}



const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeException: grade too High";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeException: grade too Low";
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}