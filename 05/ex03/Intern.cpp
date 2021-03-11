#include "Intern.hpp"

/*
** ------------------------------- ATTRIBUTER --------------------------------
*/
static Form* makePr(std::string const &target)
{
	return (new PresidentPardonForm(target));
}
static Form* makeRb(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}
static Form* makeSb(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}
Format format[3] = {
	{"presidential pardon", &makePr},
	{"robotomy request", &makeRb},
	{"shrubberry creation", &makeSb}
};

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
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(format[i].name) == 0)
		{
			std::cout << "Intern creates " << name << std::endl;
			return format[i].func(target);
		}
	}
	std::cout << "No form of " << name << std::endl;
	return (NULL);
}
