#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src )
: Enemy(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs )
{
	if ( this != &rhs )
		Enemy::operator=(rhs);
	return *this;
}
