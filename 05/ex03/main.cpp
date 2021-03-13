#include "Intern.hpp"

int main()
{
	Intern in;
	Form *s = in.makeForm("shrubberry creation", "Starget");
	std::cout << *s << std::endl;
	delete s;
	
	Form  *p = in.makeForm("presidential pardon", "Ptarget");
	std::cout << *p << std::endl;
	delete p;

	Form  *r = in.makeForm("robotomy request", "Rtarget");
	std::cout << *r << std::endl;
	delete r;

	Form  *n = in.makeForm("sfasf", "Ptarget");
	(void)n;
}