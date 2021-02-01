#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public : 
		Form *makeForm(std::string const &name, std::string const &target);
};

#endif