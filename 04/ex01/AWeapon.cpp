#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apCost, int damage)
{
	this->name = name;
	this->apCost = apCost;
	this->damage = damage;
}

AWeapon::AWeapon( const AWeapon & src )
{
	this->name = src.name;
	this->apCost = src.apCost;
	this->damage = src.damage;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
AWeapon::~AWeapon()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon & AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->apCost = rhs.getAPCost();
		this->damage = rhs.getDamage();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apCost);
}
int AWeapon::getDamage() const
{
	return (this->damage);
}