#include "FragTrap.hpp"

int main()
{
	FragTrap *tp = new FragTrap("FragTrap");

	srand(time(0));
	tp->vaulthunter_dot_exe("Player");
	tp->vaulthunter_dot_exe("Player");
	tp->vaulthunter_dot_exe("Player");
	tp->vaulthunter_dot_exe("Player");
	tp->vaulthunter_dot_exe("Player");
	tp->meleeAttack("Player");
	tp->rangedAttack("Player");
	tp->takeDamage(20);
	tp->beRepaierd(50);
	tp->takeDamage(200);
}