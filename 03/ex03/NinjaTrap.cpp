#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
{
}
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
NinjaTrap::NinjaTrap( const NinjaTrap & src ) : ClapTrap(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream & operator<<( std::ostream & o, NinjaTrap const & i )
{
	o  << i.getName();
	return o;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << "ClapTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << "FragTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << "ScavTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << "NinjaTrap " << trap.getName() << " in the Shoebox" << std::endl << std::endl;
}

