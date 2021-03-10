#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name, int maxHitPoint, int maxEnergyPoint, int hitPoint, int energyPoint, int level,
int meleeAttackDamage, int rangedAttackDamage, int armorDamageRuduction)
: maxHitPoint(maxHitPoint), maxEnergyPoint(maxEnergyPoint), hitPoint(hitPoint), energyPoint(energyPoint), level(level),
meleeAttackDamage(meleeAttackDamage), rangedAttackDamage(rangedAttackDamage), armorDamageRuduction(armorDamageRuduction)
{
	std::cout << "ClapTrap is Made" << std::endl << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap( const ClapTrap & src )
: hitPoint(src.hitPoint), energyPoint(src.energyPoint),
level(src.level), name(src.name), meleeAttackDamage(src.meleeAttackDamage), rangedAttackDamage(src.rangedAttackDamage), armorDamageRuduction(src.armorDamageRuduction)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is Destoryed" << std::endl << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
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

std::ostream & operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::rangedAttack(std::string const &target)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	if (this->hitPoint <= 0)
		return ;
	std::cout << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damage;

	if (this->hitPoint <= 0)
		return ;
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
		std::cout << "ClapTrap " << this->name << " is Dead" << std::endl << std::endl;
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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName() const
{
	return this->name;
}