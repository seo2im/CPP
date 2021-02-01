#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(Ice const &other) : AMateria("ice")
{
	*this = other;
}
Ice::~Ice(){}

AMateria *Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}
void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}