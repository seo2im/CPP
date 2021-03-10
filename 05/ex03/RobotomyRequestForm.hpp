#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private :
		std::string target;
		RobotomyRequestForm();

	public :
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm( const RobotomyRequestForm & src );
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

		void excute(Bureaucrat const &executor) const;
};


#endif