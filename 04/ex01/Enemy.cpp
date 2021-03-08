#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy( const Enemy & src )
: hp(src.hp), type(src.type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy & Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->hp = rhs.getHP();
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->hp -= damage;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Enemy::getHP() const
{
	return (this->hp);
}

std::string Enemy::getType() const
{
	return (this->type);
}
