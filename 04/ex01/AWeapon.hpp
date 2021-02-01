#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	protected :
		std::string name;
		int apCost;
		int damage;
		
	public :
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif