#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		PlasmaRifle( const PlasmaRifle & src );
		~PlasmaRifle();

		PlasmaRifle & operator=( PlasmaRifle const & rhs );

		void attack() const;
};

#endif