#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat sb("sb", 120);
	Bureaucrat rb("t2", 30);
	Bureaucrat pb("t2", 3);
	ShrubberyCreationForm s("targetS");
	RobotomyRequestForm r("targetR");
	PresidentPardonForm p("targetP");

	try
	{
		sb.signForm(s);
		sb.executeForm(s);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		rb.signForm(r);
		rb.executeForm(r);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		pb.signForm(p);
		pb.executeForm(p);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}