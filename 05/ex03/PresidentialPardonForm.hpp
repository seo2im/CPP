#ifndef PRESIDNETIALPARSONFORM_HPP
# define PRESIDNETIALPARSONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentPardonForm: public Form
{
	private :
		std::string target;
		PresidentPardonForm();
		
	public :
		PresidentPardonForm(std::string const &target);
		PresidentPardonForm( const PresidentPardonForm & src );
		~PresidentPardonForm();
		PresidentPardonForm & operator=( PresidentPardonForm const & rhs );

		void excute(Bureaucrat const &executor) const;
};

#endif