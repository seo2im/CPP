#include "MutantStack.hpp"
#include <iostream>

int main()
{
	/* in subject */
	std::cout << "subject's" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> copy(mstack);
	

	std::cout << "personal's" << std::endl;
	MutantStack<int> s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	std::cout << "iter" << std::endl;
	MutantStack<int>::iterator begin = s.begin();
	MutantStack<int>::iterator end = s.end();

	while (begin != end)
	{
		std::cout << *begin << std::endl;
		++begin;
	}

	MutantStack<int>::reverse_iterator rbegin = s.rbegin();
	MutantStack<int>::reverse_iterator rend = s.rend();

	std::cout << "reverse" << std::endl;
	while (rbegin != rend)
	{
		std::cout << *rbegin << std::endl;
		++rbegin;
	}
}

