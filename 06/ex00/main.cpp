#include "convertor.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2) 
	{
		std::cout << "Not correct arguments!" << std::endl;
		return (0);
	}

	convertor(argv[1]);
}