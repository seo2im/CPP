#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->aweapon = NULL;
}
Character::~Character(){}

std::string Character::getName() const
{
	return (this->name);
}
int Character::getAp() const
{
	return (this->ap);
}
AWeapon *Character::getAWeapon() const
{
	return (this->aweapon);
}

void Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}
void Character::equip(AWeapon *aweapon)
{
	this->aweapon = aweapon;
}
void Character::attack(Enemy *enemy)
{
	if (!this->aweapon || !enemy)
		return ;
	if (this->ap < this->aweapon->getAPCost())
		return ;
	this->ap -= this->aweapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType()
			<< " with a " << this->aweapon->getName() << std::endl;
	this->aweapon->attack();
	enemy->takeDamage(this->aweapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character const &charactor)
{
	out << charactor.getName() << " has " << charactor.getAp() << " AP and ";
	if (charactor.getAWeapon())
		out << "wields a " << charactor.getAWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}