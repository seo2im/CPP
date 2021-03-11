#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	
	std::cout << "----------SCAV------------" << std::endl;
	ScavTrap st("ScavTrap");
	std::cout << "----------FRAG------------" << std::endl;
	FragTrap ft("FragTrap");
	std::cout << "----------Ninja------------" << std::endl;
	NinjaTrap nj("NinjaTrap");
	
	std::cout << "----------Super------------" << std::endl;
	SuperTrap sp("SuperTrap");

	sp.meleeAttack("Player");
	sp.rangedAttack("Player");
	sp.takeDamage(20);
	sp.takeDamage(20);
	sp.takeDamage(20);
	sp.takeDamage(20);
	sp.beRepaierd(50);

	sp.vaulthunter_dot_exe("Player");
	sp.ninjaShoebox(st);
	sp.ninjaShoebox(ft);
	sp.ninjaShoebox(nj);
	sp.takeDamage(200);

	std::cout << "----------END------------" << std::endl;
}

