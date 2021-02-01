#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private :
		std::string target;

	public :
		ShrubberyCreationForm(std::string const &target);
		void excute(Bureaucrat const &executor) const;
};


#endif