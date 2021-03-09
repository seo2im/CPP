#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
: name(""), grade(1)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
: name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
: name(src.name), grade(src.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		Bureaucrat tmp(rhs);
		*this = tmp;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

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
	}
}

void Bureaucrat::executeForm(Form const &form) const
{
	form.excute(*this);
	std::cout << "Bureaucrat:" << this->getName() << " executes Form:" << form.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Bureaucrat::getName() const
{
	return (this->name);
}
int	Bureaucrat::getGrade() const
{
	return (this->grade);
}
