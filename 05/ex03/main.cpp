#include "Intern.hpp"

int main()
{
	Intern in;
	Form *f = in.makeForm("Shubeery Creation", "target");
	std::cout << *f << std::endl;
	delete f;
}