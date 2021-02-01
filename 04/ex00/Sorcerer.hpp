#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	private :
		std::string name;
		std::string title;
	public :
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif