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
: _type(src._type), _xp(src._xp)
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

AMateria & AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		this->_xp = rhs.getXP();
	}
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
