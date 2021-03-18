#include "span.hpp"
#include <iostream>

Span *rand_gen()
{
	srand(time(NULL));

	int len = 10;
	Span *sp = new Span(len);

	for (int i = 0; i < len; i++) {
		try {
			sp->addNumber(rand() % 100);
		} catch(std::exception const & e) {
			std::cout << e.what() << std::endl;
			i--;
		}
		
	}
	return sp;
}

int main()
{
	Span sp(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span *rsp = rand_gen();
	std::cout << *rsp << std::endl;
	std::cout << rsp->shortestSpan() << std::endl;
	std::cout << rsp->longestSpan() << std::endl;
	delete rsp;
	
}