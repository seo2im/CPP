#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent normal;
	ZombieEvent bird;

	Zombie *normalZombies[3];
	Zombie *birdZombies[3];

	normal.setZombieType("Normal");
	for (int i = 0; i < 3; i++)
		normalZombies[i] = normal.randomChump();
	bird.setZombieType("Bird");
	for (int i = 0; i < 3; i++)
		birdZombies[i] = bird.randomChump();
	for (int i = 0; i < 3; i++)
	{
		delete birdZombies[i];
		delete normalZombies[i];
	}
}