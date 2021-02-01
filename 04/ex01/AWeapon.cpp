#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apCost, int damage)
{
	this->name = name;
	this->apCost = apCost;
	this->damage = damage;
}
AWeapon::~AWeapon(){}

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