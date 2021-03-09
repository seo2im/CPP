#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
PresidentPardonForm::PresidentPardonForm() : Form("", 1, 1)
{
}
PresidentPardonForm::PresidentPardonForm(std::string const &target)
: Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
}
PresidentPardonForm::PresidentPardonForm( const PresidentPardonForm & src )
: Form(src), target(src.target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentPardonForm::~PresidentPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentPardonForm & PresidentPardonForm::operator=( PresidentPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		PresidentPardonForm tmp(rhs);
		*this = tmp;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentPardonForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
