#ifndef ZOMBIE_EVNET_HPP
# define ZOMBIE_EVNET_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent
{
	private :
		static std::string names[5];
		std::string type;
	public :
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
};

#endif