#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string name;
		Victim();

	public:
		Victim( const Victim & src );
		Victim(std::string name);
		virtual ~Victim();
		Victim & operator=( Victim const & rhs );
		
		virtual void getPolymorphed() const;

		std::string getName() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif