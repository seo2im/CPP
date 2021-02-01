#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
	protected :
		int hp;
		std::string type;
		
	public :
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;
		
		virtual void takeDamage(int damage);
};

#endif