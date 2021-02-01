#include "Contact.hpp"

std::string Contact::fieldNames[11] = {
	"first name", "last name", "nickname",
	"login", "postal address", "email address", "phone number",
	"birthday date", "favorite meal", "underwear color", "darkest secret"
};

bool Contact::Input(int index)
{
	std::cout << "Input Each field. If you want to out, write \"EXIT\"" << std::endl;
	this->index = index;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter the " << Contact::fieldNames[i] << ": ";
		std::getline(std::cin, this->fields[i]);
		if (this->fields[i].length() == 0)
		{
			std::cout << "Empty " << Contact::fieldNames[i] << " field, input correct" << std::endl;
			i--;
			continue;
		}
		if (this->fields[i] == "EXIT")
		{
			std::cout << "Exit input process" << std::endl;
			return (false);
		}
	}
	return (true);
}

void Contact::Show()
{
	std::cout << this->index << "'s information is" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "  " << Contact::fieldNames[i] << " : " << this->fields[i] << std::endl;
	}
}

void Contact::ShowPreview()
{
	
	std::cout<< "|" << std::setw(10) << this->index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->fields[i].length() > 10)
			std::cout << this->fields[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->fields[i];
	}
	std::cout << "|" << std::endl;
}
