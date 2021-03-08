#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
	private :
		int hp;
		std::string type;
		Enemy();
		
	public :
		Enemy(int hp, std::string const &type);
		Enemy( const Enemy & src );
		virtual ~Enemy();
		Enemy & operator=( Enemy const & rhs );

		std::string getType() const;
		int getHP() const;
		
		virtual void takeDamage(int damage);
};

#endif