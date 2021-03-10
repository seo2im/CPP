#include "FragTrap.hpp"

int main()
{
	FragTrap tp("FragTrap");

	tp.vaulthunter_dot_exe("Player");
	tp.vaulthunter_dot_exe("Player");
	tp.vaulthunter_dot_exe("Player");
	tp.vaulthunter_dot_exe("Player");
	tp.vaulthunter_dot_exe("Player");
	tp.meleeAttack("Player");
	tp.rangedAttack("Player");
	tp.takeDamage(20);
	tp.beRepaierd(50);
	tp.takeDamage(200);
}