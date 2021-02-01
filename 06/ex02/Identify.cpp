#include "Identify.hpp"
#include <iostream>

Base *generate(void)
{
	int check = rand();

	if (check % 3 == 0 )
		return (new A);
	else if (check % 3 == 1)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

/*
*	use dynamic with ref -> fail = execption, so use pointer
*/
void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}