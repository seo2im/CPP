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
ScavTrap::ScavTrap(std::string name)
: hitPoint(ScavTrap::maxHitPoint), energyPoint(ScavTrap::maxEnergyPoint), level(1),
meleeAttackDamage(20), rangedAttackDamage(15), armorDamageRuduction(3)
{
	this->name = name;
	std::cout << "SC4V-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << ScavTrap::maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << ScavTrap::maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< "\nLevel : " << this->level
	<< std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
: hitPoint(src.hitPoint), energyPoint(src.energyPoint), level(src.level), name(src.name),
meleeAttackDamage(src.meleeAttackDamage), rangedAttackDamage(src.rangedAttackDamage), armorDamageRuduction(src.armorDamageRuduction)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->name << " is Dead" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	this->hitPoint = rhs.hitPoint;
	this->energyPoint = rhs.energyPoint;
	this->level = rhs.level;
	this->name = rhs.name;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageRuduction = rhs.armorDamageRuduction;
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage;

	damage = amount - this->armorDamageRuduction;
	if (damage <= 0)
		std::cout << "SC4V-TP " << this->name << " armored!"<< std::endl;
	else
	{
		this->hitPoint -= damage;
		std::cout << "SC4V-TP " << this->name << " take " << amount 
		<< " damaged, HP " << (this->hitPoint >= 0 ? this->hitPoint : 0) << " remained!" << std::endl;
	}

	if (this->hitPoint <= 0)
		delete this;
}

void ScavTrap::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > ScavTrap::maxHitPoint)
		this->hitPoint = ScavTrap::maxHitPoint;
	if (this->energyPoint > ScavTrap::maxEnergyPoint)
		this->energyPoint = ScavTrap::maxEnergyPoint;
	std::cout << "SC4V-TP " << this->name << " repaired " << amount 
	<< " points , HP " << this->hitPoint
	<< " and Energy " << this->energyPoint << " remained!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "SC4V-TP " << this->name << " challnge : " << ScavTrap::challenge[rand() % 5] << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ScavTrap::getName() const
{
	return this->name;
}