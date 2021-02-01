#include "ScavTrap.hpp"

std::string ScavTrap::challenge[5] = {
	"FIRST",
	"SECOND",
	"THIRD",
	"FOUTH",
	"FIVTH"
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->maxHitPoint = 100;
	this->hitPoint = 100;
	this->maxEnergyPoint = 50;
	this->energyPoint = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageRuduction = 3;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "FR4G-TP " << this->name << " challnge : " << ScavTrap::challenge[rand() % 5] << std::endl;
}
