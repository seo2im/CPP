#ifndef CHARACTOR_HPP
# define CHARACTOR_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public :
		Character(std::string const &name);
		Character( const Character & src );
		~Character();
		Character & operator=( Character const & rhs );
		
		void recoverAP();
		void equip(AWeapon *aweapon);
		void attack(Enemy *enemy);

		std::string getName() const;
		int getAp() const;
		AWeapon *getAWeapon() const;
	
	private :
		std::string name;
		int ap;
		AWeapon *aweapon;
		Character();

};

std::ostream &operator<<(std::ostream &out, Character const &charactor);

#endif