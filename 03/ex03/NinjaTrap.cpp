#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->maxHitPoint = 60;
	this->hitPoint = 60;
	this->maxEnergyPoint = 120;
	this->energyPoint = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageRuduction = 0;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "ClapTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "FragTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "ScavTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "NinjaTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

