#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria( const AMateria & src )
: _xp(src._xp), _type(src._type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
/*
	What the fuckings this mean....
"While assigning a Materia to another, copying the type doesn’t make
sense..."
*/
AMateria & AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_xp = rhs.getXP();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}
