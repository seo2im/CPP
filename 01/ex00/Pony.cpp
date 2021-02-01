#include "Pony.hpp"

Pony::Pony(std::string name, std::string kind, int ages)
{
	this->name = name;
	this->kind = kind;
	this->ages = ages;
}

void Pony::ShowInformation()
{
	std::cout << this->name << " is " << this->kind << " kind & args " << this->ages << std::endl;
}