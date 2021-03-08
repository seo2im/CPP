#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name)
: hitPoint(FragTrap::maxHitPoint), energyPoint(FragTrap::maxEnergyPoint),
level(1), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageRuduction(3)
{
	this->name = name;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << FragTrap::maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << FragTrap::maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< "\nLevel : " << this->level
	<< std::endl << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
: hitPoint(src.hitPoint), energyPoint(src.energyPoint),
level(src.level), name(src.name), meleeAttackDamage(src.meleeAttackDamage), rangedAttackDamage(src.rangedAttackDamage), armorDamageRuduction(src.armorDamageRuduction)
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead\n" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap & FragTrap::operator=( FragTrap const & rhs )
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

std::ostream & operator<<( std::ostream & o, FragTrap const & i )
{
	o << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!\n" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!\n" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage;

	damage = amount - this->armorDamageRuduction;
	if (damage <= 0)
		std::cout << "FR4G-TP " << this->name << " armored!"<< std::endl;		
	else
	{
		this->hitPoint -= damage;
		std::cout << "FR4G-TP " << this->name << " take " << amount 
		<< " damaged, HP " << (this->hitPoint >= 0 ? this->hitPoint : 0) <<  " remained!\n" << std::endl;
		
		if (this->hitPoint <= 0)
			delete this;
	}
}

void FragTrap::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > FragTrap::maxHitPoint)
		this->hitPoint = FragTrap::maxHitPoint;
	if (this->energyPoint > FragTrap::maxEnergyPoint)
		this->energyPoint = FragTrap::maxEnergyPoint;
	std::cout << "FR4G-TP " << this->name << " repaired " << amount 
	<< " points , HP " << this->hitPoint
	<< " and Energy " << this->energyPoint << " remained!\n" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	semiAttack list[] = {
		&FragTrap::dance,
		&FragTrap::provocation,
		&FragTrap::slow,
		&FragTrap::fearing,
		&FragTrap::fascination
	};

	if (this->energyPoint <= 25)
		this->beRepaierd(25);
	(this->*list[rand() % 5])(target);
}

void FragTrap::dance(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " is dancing!\n" << target 
	<< " get confused!\n" << std::endl;
}

void FragTrap::provocation(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " use provacation!\n" << target 
	<< " is angry!\n" << std::endl;
}

void FragTrap::slow(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " use slow!\n" << target 
	<< " decrease speed!\n" << std::endl;
}

void FragTrap::fearing(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " use fearing!\n" << target 
	<< " get confused!\n" << std::endl;
}

void FragTrap::fascination(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " use fascination!\n" << target 
	<< " come slowly!\n" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string FragTrap::getName() const
{
	return this->name;
}