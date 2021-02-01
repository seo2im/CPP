#include "phonebook.hpp"

std::string PhoneBook::fieldNames[11] = {
	"first name", "last name", "nickname",
	"login", "postal address", "email address", "phone number",
	"birthday date", "favorite meal", "underwear color", "darkest secret"
};

void PhoneBook::AddContact()
{
	if (this->list[this->count].Input(this->count + 1))
	{
		this->count++;
		std::cout << "list " << this->count << " update !!" << std::endl;
	}
}

void PhoneBook::ShowColumns()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->count; i++)
		this->list[i].ShowPreview();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::SearchContact()
{
	int index;

	this->ShowColumns();
	std::cout << "Enter Index. If you want to out, Enter the \"0\"" << std::endl;
	
	while (true)
	{
		std::cout << "Index : ";
		if (!(std::cin >> index))
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Please check correct number" << std::endl;
			continue;
		}
		if (index > this->count)
		{
			std::cout << "Over index, please check index range : under " << this->count << std::endl;
			continue;
		}
		if (index == 0)
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			return ;
		}
		this->list[index - 1].Show();
	}
}