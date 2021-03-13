#include "Identify.hpp"

int main()
{
	srand(time(NULL));

	Base *base = generate();
	identify_from_reference(*base);
	identify_from_pointer(base);

	A a;
	B b;
	C c;

	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);

	identify_from_reference(a);
	identify_from_reference(b);
	identify_from_reference(c);


	delete base;
}