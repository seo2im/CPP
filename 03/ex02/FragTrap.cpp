#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
FragTrap::FragTrap()
{
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->maxHitPoint = 100;
	this->hitPoint = 100;
	this->maxEnergyPoint = 100;
	this->energyPoint = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageRuduction = 5;
	std::cout << "FR4G-TP " << this->name << "`s properties\n"
	<< "HP : " << this->hitPoint << "(Max : " << this->maxHitPoint << ")\n"
	<< "Energy : "   << this->energyPoint << "(Max : " << this->maxEnergyPoint << ")\n"
	<< "Each Damage(Melee : " << this->meleeAttackDamage
	<< " | Range : " << this->rangedAttackDamage << " )"
	<< "\nArmor : " << this->armorDamageRuduction
	<< std::endl << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
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