#include "ZombieHorde.hpp"

std::string ZombieHorde::names[5] = {
	"Cripper", "Hunter", "Killer", "Shadower", "Snipper", 
};

std::string ZombieHorde::types[2] = {
	"Normal", "Bird"
};

ZombieHorde::ZombieHorde(int num)
{
	if (num > 0)
	{
		this->num = num;
		this->zombies = new Zombie[num];
		for (int i = 0; i < num; i++)
			this->zombies[i].set(ZombieHorde::names[rand() % 5], ZombieHorde::types[rand() % 2]);
	}
	else
		std::cout << "wrong number" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	for(int i = 0; i < this->num; i++)
		this->zombies[i].announce();
}

void ZombieHorde::announce()
{
	delete[] this->zombies;
}

