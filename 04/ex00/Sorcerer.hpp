#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	private :
		Sorcerer();
		std::string name;
		std::string title;

	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer( const Sorcerer & src );
		~Sorcerer();
		Sorcerer &operator=( Sorcerer const & rhs );
		
		void polymorph(Victim const &victim) const;

		std::string getName() const;
		std::string getTitle() const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif