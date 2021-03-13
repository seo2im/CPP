#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat sb("sb", 120);
	ShrubberyCreationForm s("targetS"); //145, 37
	try
	{
		s.beSigned(sb);
		sb.signForm(s);
		sb.executeForm(s);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";

	Bureaucrat rb("t2", 30);
	RobotomyRequestForm r("targetR"); //72, 45
	try
	{
		r.beSigned(rb);
		rb.signForm(r);
		rb.executeForm(r);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\n";

	Bureaucrat pb("t2", 3);
	PresidentialPardonForm p("targetP"); //25, 5
	try
	{
		p.beSigned(pb);
		pb.signForm(p);
		pb.executeForm(p);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}