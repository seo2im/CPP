#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private :
		std::string target;

	public :
		RobotomyRequestForm(std::string const &target);
		void excute(Bureaucrat const &executor) const;
};


#endif