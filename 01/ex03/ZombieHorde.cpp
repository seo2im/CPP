#include "ZombieHorde.hpp"

std::string ZombieHorde::names[5] = {
	"Cripper", "Hunter", "Killer", "Shadower", "Snipper", 
};

std::string ZombieHorde::types[2] = {
	"Normal", "Bird"
};

ZombieHorde::ZombieHorde(int num)
{
	srand((unsigned int)time(0));
	if (num > 0)
	{
		this->num = num;
		this->zombies = new Zombie[num];
		for (int i = 0; i < num; i++)
			this->zombies[i].set(ZombieHorde::types[rand() % 2], ZombieHorde::names[rand() % 5]);
	}
	else
		std::cout << "wrong number" << std::endl;
}

void ZombieHorde::announce()
{
	for(int i = 0; i < this->num; i++)
		this->zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

