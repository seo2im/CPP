#include "Identify.hpp"

int main()
{
	Base *base = generate();
	identify_from_reference(*base);
	identify_from_pointer(base);

	delete base;
}