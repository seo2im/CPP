#include "FragTrap.hpp"

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
	<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " is Dead" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target 
	<< " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

bool FragTrap::takeDamage(unsigned int amount)
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
		<< " damaged, HP " << (this->hitPoint >= 0 ? this->hitPoint : 0) <<  " remained!" << std::endl;
		return (true);
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
	<< " and Energy " << this->energyPoint << " remained!" << std::endl;
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