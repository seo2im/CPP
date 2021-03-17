#include "Array.hpp"
#include <iostream>

int main()
{
	/* init */
	Array<int> arr(5);
	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i;
	
	/* print */
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i];
	std::cout << std::endl;

	/* copy & oper */
	Array<int> test = arr;
	Array<int> test2(test);
	
	/* overflow */
	try {
		test2[5];
	} catch (const std::exception &e) {
		std::cerr << e.what() << "\n";
	}
	
	/* use string array */
	Array<std::string> ass(3);

	ass[0] = "aa";
	ass[1] = "bb";
	ass[2] = "cc";
	for (size_t i = 0; i < ass.size(); i++)
		std::cout << ass[i];
	std::cout << std::endl;
}