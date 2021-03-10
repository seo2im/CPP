#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon: public Victim
{	
	public :
		Peon(std::string name);
		Peon( const Peon & src );
		virtual ~Peon();

		Peon & operator=( Peon const & rhs );

		void getPolymorphed() const;

	private :
		Peon();
};

#endif