#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern & Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	if ("President Pardon Form" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentPardonForm(target));
	}
	else if ("Robotomy Request Form" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if ("Shubeery Creation" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	std::cout << "Not correct name! : " << name << std::endl;
	return (NULL);
}