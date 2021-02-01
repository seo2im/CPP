#include <iostream>

template<typename T>
void iter(T *arr, size_t size, void(*f)(T const &e))
{
	for (size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template<typename T>
void f(T &e)
{
	std::cout << e << " ";
}

int main(void)
{
	int intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &f);
	std::cout << std::endl;

	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &f);
	std::cout << std::endl;

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &f);
	std::cout << std::endl;

	bool boolR[2] = { false, true };
	iter(boolR, 2, &f);
	std::cout << std::endl;

	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, 5, &f); std::cout << std::endl;
	iter(stringR, 2, &f); std::cout << std::endl;
	iter(stringR, 0, &f); std::cout << std::endl;

	return (0);
}