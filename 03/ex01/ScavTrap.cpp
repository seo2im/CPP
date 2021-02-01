#include "ScavTrap.hpp"

std::string ScavTrap::challenge[5] = {
	"FIRST",
	"SECOND",
	"THIRD",
	"FOUTH",
	"FIVTH"
};

ScavTrap::ScavTrap(std::string name)
: hitPoint(ScavTrap::maxHitPoint), energyPoint(ScavTrap::maxEnergyPoint), level(1),
meleeAttackDamage(20), rangedAttackDamage(15), armorDamageRuduction(3)
{
	this->name = name;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << ScavTrap::maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << ScavTrap::maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

bool ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > ScavTrap::maxHitPoint)
		this->hitPoint = ScavTrap::maxHitPoint;
	if (this->energyPoint > ScavTrap::maxEnergyPoint)
		this->energyPoint = ScavTrap::maxEnergyPoint;
	std::cout << "FR4G-TP " << this->name << " repaired " << amount 
	<< " points , HP " << this->hitPoint
	<< " and Energy " << this->energyPoint << " remained!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "FR4G-TP " << this->name << " challnge : " << ScavTrap::challenge[rand() % 5] << std::endl;
}
