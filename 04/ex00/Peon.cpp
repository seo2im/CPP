#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon()
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon & Peon::operator=( Peon const & rhs )
{
	if (this != &rhs)
		Victim::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has benn turned into a pink pony!" << std::endl;
}