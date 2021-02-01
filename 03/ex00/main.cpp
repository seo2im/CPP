#include "FragTrap.hpp"

int main()
{
	FragTrap *tp = new FragTrap("FragTrap");

	tp->vaulthunter_dot_exe("Player");
	tp->meleeAttack("Player");
	tp->rangedAttack("Player");
	tp->takeDamage(20);
	tp->beRepaierd(50);
	if (tp->takeDamage(200))
		delete tp;
}