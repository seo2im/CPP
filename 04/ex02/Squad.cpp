#include "Squad.hpp"

Squad::Squad()
{
	this->units = NULL;
	this->count = 0;
}
Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

int Squad::getCount() const
{
	return (this->count);	
}
ISpaceMarine* Squad::getUnit(int i) const
{
	if (i > count || i < 0 || count == 0)
		return (nullptr);
	return (this->units[i]);
}
int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (!this->units)
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	else
	{
		for (int i = 0; i < this->count; i++)
		{
			if (this->units[i] == unit)
				return (this->count);
		}
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		cpy[this->count] = unit;
		delete this->units;
		this->units = cpy;
		this->count++;
	}
	return (this->count);
}