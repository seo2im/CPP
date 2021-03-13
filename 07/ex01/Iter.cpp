#include <iostream>

template<typename T>
void iter(T *arr, size_t size, void(*f)(T &e))
{
	for (size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template<typename T> void f(T &e)
{
	std::cout << e;
}
template<> void f<int>(int &e) {
	std::cout << ++e << std::endl;
}
template<> void f<float>(float &e) {
	std::cout << e << std::endl;
}

int main(void)
{
	int intR[5] = { 10, 252, -25, 6, 5 };
	iter<int>(intR, 5, f);
	std::cout << std::endl;

	float floatR[5] = { 25, -1.1f, 342.252, 0.0f, 25.f };
	iter<float>(floatR, 5, f);
	std::cout << std::endl;

	std::string stringR[5] = { "Why ", "This ", "Make", "Umhhhhh... ", "THATHATHA " };
	iter<std::string>(stringR, 5, f); std::cout << std::endl;
	iter<std::string>(stringR, 2, f); std::cout << std::endl;
	iter<std::string>(stringR, 0, f); std::cout << std::endl;

	return (0);
}