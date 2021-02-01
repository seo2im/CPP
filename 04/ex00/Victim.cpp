#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << "I`m " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}