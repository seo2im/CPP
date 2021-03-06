#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: maxHitPoint(0), maxEnergyPoint(0), hitPoint(0), energyPoint(0), level(0),
meleeAttackDamage(0), rangedAttackDamage(0), armorDamageRuduction(0)
{
	std::cout << "ClapTrap is Made" << std::endl << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is Destoryed" << std::endl << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damage;

	damage = amount - this->armorDamageRuduction;
	if (damage <= 0)
		std::cout << this->name << " armored!"<< std::endl << std::endl;
	else
	{
		this->hitPoint -= damage;
		std::cout << this->name << " take " << amount 
		<< " damaged, HP " << (this->hitPoint >= 0 ? this->hitPoint : 0) << " remained!" << std::endl << std::endl;
	}

	if (this->hitPoint <= 0)
		delete this;
}

void ClapTrap::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	if (this->energyPoint > this->maxEnergyPoint)
		this->energyPoint = this->maxEnergyPoint;
	std::cout << this->name << " repaired " << amount 
	<< " points , HP " << this->hitPoint
	<< " and Energy " << this->energyPoint << " remained!" << std::endl << std::endl;
}

std::string ClapTrap::getName()
{
	return (this->name);
}
