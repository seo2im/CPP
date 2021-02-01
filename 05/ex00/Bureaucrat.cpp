#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	this->grade = grade;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::decreaseGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
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