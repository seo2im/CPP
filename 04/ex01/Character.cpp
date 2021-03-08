#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Character::Character()
{
}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->aweapon = NULL;
}

Character::Character( const Character & src )
: name(src.name), ap(src.ap), aweapon(src.aweapon)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character & Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->ap = rhs.getAp();
		this->aweapon = rhs.getAWeapon();
	}
	return *this;
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

/*
** --------------------------------- METHODS ----------------------------------
*/

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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

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
