#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const &name)
{
	this->name = name;
	this->num = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character & src )
: name(src.name), num(0)
{
	for (int i = 0; i < src.num; i++)
		this->equip(src.inventory[i]->clone());
	for (int i = src.num; i < 4; i++)
		this->inventory[i] = nullptr;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < this->num; i++)
		delete this->inventory[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &	Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		for (int i = 0; i < this->num; i++)
			delete this->inventory[i];
		for (int i = 0; i < rhs.getNum(); i++)
			this->equip(rhs.getInventory(i)->clone());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria *m)
{
	if (this->num == 4 || !m)
		return ;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[this->num++] = m;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->num || !this->inventory[idx])
		return ;
	for (int i = 0; i < 3; i ++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = NULL;
	}
	this->num--;
}
void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->num || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Character::getName() const
{
	return (this->name);
}

int Character::getNum() const
{
	return (this->num);
}

AMateria const *Character::getInventory(int i) const
{
	if (i < 0 || i > this->num)
		return nullptr;	
	return this->inventory[i];
}