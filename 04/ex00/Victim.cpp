#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	this->name = src.name;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim & Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
		this->name = rhs.getName();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << "I`m " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Victim::getName() const
{
	return (this->name);
}
