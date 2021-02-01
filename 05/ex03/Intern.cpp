#include "Intern.hpp"

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	if ("President Pardon Form" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentPardonForm(target));
	}
	else if ("Robotomy Request Form" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if ("Shubeery Creation" == name)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	std::cout << "Not correct name! : " << name << std::endl;
	return (NULL);
}