#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat test("TEST", 10);
	std::cout << test << std::endl;
	test.increaseGrade();
	std::cout << test << std::endl;
	test.decreaseGrade();
	std::cout << test << std::endl;


	try
	{
		Bureaucrat lowErr("lowErr", 0);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat hgihErr("hgihErr", 200);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat incErr("incErr", 150);
		incErr.increaseGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat decErr("decErr", 1);
		decErr.decreaseGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}