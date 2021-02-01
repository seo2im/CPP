#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name  = name;
	this->title = title;
	std::cout << name << ", " << title << ",  is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title
			  << ",  is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}


std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (out);
}