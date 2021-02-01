#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde
{
	private	:
		static std::string names[5];
		static std::string types[2];
		int num;
		Zombie *zombies;
	public :
		ZombieHorde(int num);
		~ZombieHorde();
		void announce();
		
};

#endif