#include "phonebook.hpp"

int main()
{
	bool isRun;
	std::string command;
	PhoneBook phonebook;

	isRun = true;
	while (isRun)
	{
		std::cout << "command : ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phonebook.AddContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.SearchContact();
		}
		else if(command == "EXIT")
		{
			isRun = false;
		}
		else
		{
			std::cout << command << " : No Command in Program" << std::endl;
		}
	}
}