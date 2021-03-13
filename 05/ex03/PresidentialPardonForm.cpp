#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
PresidentialPardonForm::PresidentialPardonForm() : Form("", 1, 1)
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: Form("Robotomy Request Form", 25, 5)
{
	this->target = target;
}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
: Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		PresidentialPardonForm tmp(rhs);
		*this = tmp;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
