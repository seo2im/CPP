#include "ScavTrap.hpp"

std::string ScavTrap::challenge[5] = {
	"FIRST",
	"SECOND",
	"THIRD",
	"FOUTH",
	"FIVTH"
};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 100, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl;
}
ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & i )
{
	o  << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->name << " is Dead" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << "SC4V-TP " << this->name << " challnge : " << ScavTrap::challenge[rand() % 5] << std::endl;
}
