#include "PowerFist.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist( const PowerFist & src )
: AWeapon(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist & PowerFist::operator=( PowerFist const & rhs )
{
	if ( this != &rhs )
		AWeapon::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}