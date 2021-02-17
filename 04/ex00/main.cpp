#include "Peon.hpp"
#include "Sorcerer.hpp"

int main()
{
	Sorcerer Kim("Kim", "Sorcerer");
	
	Victim Lee("Lee");
	Peon Park("Park");

	std::cout << Kim << Lee << Park;

	Kim.polymorph(Lee);
	Kim.polymorph(Park);
	return (0);
}