#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
		std::string name;
		AMateria *inventory[4];
		int	num;
		Character();

	public :
		Character(std::string const &name);
		Character( const Character & src );
		virtual ~Character();
		Character & operator=( Character const & rhs );

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		std::string const &getName() const;
		int getNum() const;
		AMateria const *getInventory(int i) const;
};

#endif