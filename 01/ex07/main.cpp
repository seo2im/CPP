#include "replace.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "Not correct arguments" << std::endl;
	else
	{
		try {
			replace(argv[1], argv[2], argv[3]);
		} catch (char const *e) {
			std::cerr << e << std::endl;
		}
		
	}
}