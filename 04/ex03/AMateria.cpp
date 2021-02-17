#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}
AMateria::~AMateria() {}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}
std::string const &AMateria::getType() const
{
	return (this->_type);
}


void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}