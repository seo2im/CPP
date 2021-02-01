#include "Pony.hpp"

void PonyOnTheStack()
{
	Pony pony("Stack", "Stack", 15);

	pony.ShowInformation();
}

void PonyOnTheHeap()
{
	Pony *pony;

	pony = new Pony("Heap", "Heap", 15);
	pony->ShowInformation();
	delete pony;
}

int main()
{
	PonyOnTheHeap();
	PonyOnTheStack();
}