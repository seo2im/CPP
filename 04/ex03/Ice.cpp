#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &other) : AMateria(other)
{
}

Ice::Ice( const Ice & src ) : AMateria(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice & Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}
void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}