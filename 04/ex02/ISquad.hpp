#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP
# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad
{
	public :
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int i) const = 0;
		virtual int push(ISpaceMarine *unit) = 0;
};

#endif