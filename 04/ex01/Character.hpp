#ifndef CHARACTOR_HPP
# define CHARACTOR_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private :
		std::string name;
		int ap;
		AWeapon *aweapon;

	public :
		Character(std::string const &name);
		~Character();
		
		std::string getName() const;
		int getAp() const;
		AWeapon *getAWeapon() const;

		void recoverAP();
		void equip(AWeapon *aweapon);
		void attack(Enemy *enemy);
};

std::ostream &operator<<(std::ostream &out, Character const &charactor);

#endif