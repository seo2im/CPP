#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <string>
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	private :
		int count;
		ISpaceMarine **units;

	public :
		Squad();
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine *unit);
};

#endif