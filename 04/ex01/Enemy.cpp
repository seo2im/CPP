#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}
Enemy::~Enemy(){}

std::string Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->hp -= damage;
}
