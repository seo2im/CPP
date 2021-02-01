#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: maxHitPoint(0), hitPoint(0), maxEnergyPoint(0), energyPoint(0), level(0),
meleeAttackDamage(0), rangedAttackDamage(0), armorDamageRuduction(0)
{
	std::cout << "ClapTrap is Made" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is Destoryed" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

bool ClapTrap::takeDamage(unsigned int amount)
{
	int damage;

	damage = amount - this->armorDamageRuduction;
	if (damage <= 0)
	{
		std::cout << "FR4G-TP " << this->name << " armored!"<< std::endl;
		return (false);
	}
	else
	{
		this->hitPoint -= damage;
		std::cout << "FR4G-TP " << this->name << " take " << amount 
		<< " damaged, HP " << (this->hitPoint >= 0 ? this->hitPoint : 0) << " remained!" << std::endl;
		return (true);
	}
}

void ClapTrap::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	if (this->energyPoint > this->maxEnergyPoint)
		this->energyPoint = this->maxEnergyPoint;
	std::cout << "FR4G-TP " << this->name << " repaired " << amount 
	<< " points , HP " << this->hitPoint
	<< " and Energy " << this->energyPoint << " remained!" << std::endl;
}

