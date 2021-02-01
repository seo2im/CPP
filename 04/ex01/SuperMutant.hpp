#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{		
	public :
		SuperMutant();
		~SuperMutant();
		
		void takeDamage(int damage);
};

#endif