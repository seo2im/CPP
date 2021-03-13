#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	MutantStack<int>::iterator begin = s.begin();
	MutantStack<int>::iterator end = s.end();

	while (begin != end)
	{
		std::cout << *begin << std::endl;
		++begin;
	}
}