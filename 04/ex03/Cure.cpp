#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src ) : AMateria(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure(){}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure & Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
		AMateria::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *Cure::clone() const
{
	/* real materia type? */
	Cure *copy = new Cure(*this);
	return (copy);
}
void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}