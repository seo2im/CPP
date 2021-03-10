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
		Squad( const Squad & src );
		virtual ~Squad();
		Squad & operator=( Squad const & rhs );

		int push(ISpaceMarine *unit);

		int getCount() const;
		ISpaceMarine* getUnit(int i) const;
		
};

#endif