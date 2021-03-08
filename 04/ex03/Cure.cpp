#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other)
: AMateria(other)
{	
}

Cure::Cure( const Cure & src ) ; AMateria(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure(){}

AMateria *Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}
void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}