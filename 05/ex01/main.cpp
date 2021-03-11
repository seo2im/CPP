#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat t1("t1", 10);
	Form f1("f1", 15, 5);
	std::cout << f1 << std::endl;
	try
	{
		f1.beSigned(t1);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		t1.signForm(f1);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "----------\n";

	Bureaucrat t2("t2", 20);
	Form f2("f2", 15, 5);
	std::cout << f2 << std::endl;
	try
	{
		f2.beSigned(t2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		t2.signForm(f2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}