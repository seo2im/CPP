#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private :
		std::string target;
		ShrubberyCreationForm();

	public :
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

		void excute(Bureaucrat const &executor) const;
};


#endif