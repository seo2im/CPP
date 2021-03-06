#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

typedef Form* (*func)(std::string const & target);
typedef struct
{
	std::string name;
	func 		func;
} Format;

class Intern
{
	public : 
		Intern();
		Intern( const Intern & src );
		~Intern();
		Intern & operator=( Intern const & rhs );
		
		Form *makeForm(std::string const &name, std::string const &target);
};

#endif