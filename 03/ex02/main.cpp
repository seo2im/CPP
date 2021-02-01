#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "----------SCAV------------" << std::endl;
	ScavTrap *st = new ScavTrap("ScavTrap");

	st->challengeNewcomer();
	st->meleeAttack("Player");
	st->rangedAttack("Player");
	st->takeDamage(20);
	st->beRepaierd(50);
	if (st->takeDamage(200))
		delete st;

	std::cout << "----------FRAG------------" << std::endl;
	FragTrap *ft = new FragTrap("FragTrap");

	ft->vaulthunter_dot_exe("Player");
	ft->meleeAttack("Player");
	ft->rangedAttack("Player");
	ft->takeDamage(20);
	ft->beRepaierd(50);
	if (ft->takeDamage(200))
		delete ft;
}

