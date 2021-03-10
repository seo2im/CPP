#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::cout << "----------SCAV------------" << std::endl;
	ScavTrap st("ScavTrap");
	std::cout << "----------FRAG------------" << std::endl;
	FragTrap ft("FragTrap");
	std::cout << "----------Clap------------" << std::endl;
	ClapTrap ct("ClapTrap");
	std::cout << "----------Ninja------------" << std::endl;
	NinjaTrap nj("NinjaTrap");
	nj.meleeAttack("Player");
	nj.rangedAttack("Player");
	nj.takeDamage(20);
	nj.beRepaierd(50);

	nj.ninjaShoebox(st);
	nj.ninjaShoebox(ct);
	nj.ninjaShoebox(ft);
	nj.ninjaShoebox(nj);

	nj.takeDamage(200);
}

