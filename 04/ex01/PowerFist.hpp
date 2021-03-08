#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist();
		PowerFist( const PowerFist & src );
		~PowerFist();

		PowerFist & operator=( PowerFist const & rhs );

		void attack() const;
};

#endif