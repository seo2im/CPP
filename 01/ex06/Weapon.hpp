#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>


class Weapon
{
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string type);
		std::string const &getType() const; //if not 'const' func, cant retrun. why?
		void setType(std::string type);
};

#endif