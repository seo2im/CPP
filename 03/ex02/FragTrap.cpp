#include "FragTrap.hpp"

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
	<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	semiAttack list[] = {
		&FragTrap::A1,
		&FragTrap::A2,
		&FragTrap::A3,
		&FragTrap::A4,
		&FragTrap::A5
	};
	if (this->energyPoint <= 25)
		this->beRepaierd(25);
	srand(time(NULL));
	(this->*list[rand() % 5])(target);	
}

void FragTrap::A1(std::string const &target)
{
	std::cout << "A1\n";
}

void FragTrap::A2(std::string const &target)
{
	std::cout << "A2\n";
}

void FragTrap::A3(std::string const &target)
{
	std::cout << "A3\n";
}

void FragTrap::A4(std::string const &target)
{
	std::cout << "A4\n";
}

void FragTrap::A5(std::string const &target)
{
	std::cout << "A5\n";
}

