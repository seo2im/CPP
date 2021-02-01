#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	private :
		std::string type, name;
	public :
		Zombie();
		Zombie(std::string type, std::string name);
		void announce();
		void set(std::string name, std::string type);
};

#endif