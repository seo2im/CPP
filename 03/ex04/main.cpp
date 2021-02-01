#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::cout << "----------SCAV------------" << std::endl;
	ScavTrap *st = new ScavTrap("ScavTrap");
	std::cout << "----------FRAG------------" << std::endl;
	FragTrap *ft = new FragTrap("FragTrap");
	std::cout << "----------Clap------------" << std::endl;
	ClapTrap *ct = new ClapTrap("ClapTrap");
	std::cout << "----------Ninja------------" << std::endl;
	NinjaTrap *nj = new NinjaTrap("NinjaTrap");
	std::cout << "----------Super------------" << std::endl;
	SuperTrap *sp = new SuperTrap("SuperTrap");
	sp->meleeAttack("Player");
	sp->rangedAttack("Player");
	sp->takeDamage(20);
	sp->beRepaierd(50);

	sp->vaulthunter_dot_exe("Player");
	sp->ninjaShoebox(*st);
	sp->ninjaShoebox(*ct);
	sp->ninjaShoebox(*ft);
	sp->ninjaShoebox(*nj);

	if (sp->takeDamage(200))
		delete sp;
	delete st;
	delete ft;
	delete ct;
}

