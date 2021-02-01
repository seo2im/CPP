#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->num = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

std::string const &Character::getName() const
{
	return (this->name);
}
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