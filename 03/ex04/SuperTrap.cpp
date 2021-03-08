#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap()
{
}

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
	std::cout << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl << std::endl;
}

SuperTrap::SuperTrap( const SuperTrap & src ) : ClapTrap(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << this->name << " is Dead" << std::endl << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap &	SuperTrap::operator=( SuperTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return *this;
}

std::ostream & operator<<( std::ostream & o, SuperTrap const & i )
{
	o << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
