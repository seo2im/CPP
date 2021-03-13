#ifndef PRESIDNETIALPARSONFORM_HPP
# define PRESIDNETIALPARSONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private :
		std::string target;
		PresidentialPardonForm();
		
	public :
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm( const PresidentialPardonForm & src );
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

		void excute(Bureaucrat const &executor) const;
};

#endif