#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	private :
		std::string name;
		int apCost;
		int damage;
		AWeapon();
		
	public :
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon( const AWeapon & src );
		virtual ~AWeapon();
		AWeapon & operator=( AWeapon const & rhs );

		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;

		virtual void attack() const = 0;
};

#endif