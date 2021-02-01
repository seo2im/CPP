#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
	private	:
		std::string	name, kind;
		int ages;
	public :
		Pony(std::string name, std::string kind, int ages);
		~Pony()
		{
			std::cout << this->name << " is Dead" << std::endl;
		}
		void ShowInformation();
};

#endif