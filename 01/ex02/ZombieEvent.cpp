#include "ZombieEvent.hpp"

std::string ZombieEvent::names[5] = {
	"Cripper", "Hunter", "Killer", "Shadower", "Snipper", 
};

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie;

	zombie = new Zombie(this->type, ZombieEvent::names[rand() % 5]);
	zombie->announce();
	return (zombie);
}