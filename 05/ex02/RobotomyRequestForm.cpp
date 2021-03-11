#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
RobotomyRequestForm::RobotomyRequestForm() : Form("", 1, 1)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
: Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		RobotomyRequestForm tmp(rhs);
		*this = tmp;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);

	std::cout << "Drilllllll!!!!!!" << std::endl;
	if ((rand() % 100) >= 50)
		std::cout << this->target << " has been successfully" << std::endl;
	else
		std::cout << this->target << " is a failure" << std::endl;
}
