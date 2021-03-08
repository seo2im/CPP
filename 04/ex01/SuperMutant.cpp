#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
: Enemy(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
		Enemy::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
		
void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
