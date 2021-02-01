#ifndef PRESIDNETIALPARSONFORM_HPP
# define PRESIDNETIALPARSONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentPardonForm: public Form
{
	private :
		std::string target;

	public :
		PresidentPardonForm(std::string const &target);
		void excute(Bureaucrat const &executor) const;
};

#endif