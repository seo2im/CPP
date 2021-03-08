#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	this->units = nullptr;
	this->count = 0;
}

Squad::Squad( const Squad & src )
: count(0), units(nullptr)
{
	this->count = 0;
	for (int i = 0; i < src.count; i++)
		this->push(src.units[i]->clone());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad & Squad::operator=( Squad const & rhs )
{
	if ( this != &rhs )
	{
		if (this->units)
		{
			for (int i = 0; i < this->count; i++)
				delete this->units;
				this->units = nullptr;
		}
		this->count = 0;
		for (int i = 0; i < rhs.getCount(); i++)
			this->push(rhs.getUnit(i)->clone());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

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
