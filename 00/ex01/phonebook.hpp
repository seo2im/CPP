#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private :
		int	count;
		static std::string fieldNames[11];
		Contact list[100];

	public :
		PhoneBook()
		{
			count = 0;
		}
		void AddContact();
		void ShowColumns();
		void SearchContact();
};

#endif
