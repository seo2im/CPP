#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->maxHitPoint = this->FragTrap::maxHitPoint;
	this->hitPoint = this->FragTrap::hitPoint;;
	this->maxEnergyPoint = this->NinjaTrap::maxEnergyPoint;
	this->energyPoint = this->NinjaTrap::energyPoint;
	this->level = 1;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageRuduction = this->FragTrap::armorDamageRuduction;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
