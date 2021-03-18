#include "easyfind.hpp"



int main()
{
	/* vector */
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	std::cout << easyfind(v, 2) << std::endl;
	try
	{
		easyfind(v, 5);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	/* list */
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	std::cout << easyfind(l, 2) << std::endl;
	try
	{
		easyfind(l, 5);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	/* stack */
	std::stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	std::cout << easyfind(s, 2) << std::endl;
}