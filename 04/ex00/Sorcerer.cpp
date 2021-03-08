#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Sorcerer::Sorcerer()
{
}
Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name  = name;
	this->title = title;
	std::cout << name << ", " << title << ",  is born!" << std::endl;
}
Sorcerer::Sorcerer( const Sorcerer & src )
: name(src.name), title(src.title)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title
			  << ",  is dead. Consequences will never be the same!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (out);
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}
