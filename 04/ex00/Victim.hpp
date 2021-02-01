#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string name;
	public:
		Victim(std::string name);
		virtual ~Victim();
		std::string getName() const;
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif