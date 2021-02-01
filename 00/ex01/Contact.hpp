#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		int	index;
		static std::string 	fieldNames[11];
		std::string			fields[11];
	
	public:
		bool Input(int i);
		void Show();
		void ShowPreview();
};

#endif