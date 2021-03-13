#include "span.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Span::Span()
{
	this->size = 0;
	this->list = nullptr;
}

Span::Span(unsigned int const size)
{
	this->list = new int[size];
	this->size = size;
	this->cursor = -1;
}

Span::Span(const Span & src)
{
	if (src.size != 0)
	{
		this->list = new int[src.size];
		for (unsigned int i = 0; i < src.size; i++)
			this->list[i] = src.list[i];
	}
	this->size = src.size;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	delete [] this->list;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span & Span::operator=(Span const & rhs)
{
	if ( this != &rhs )
	{
		if (this->list)
			delete [] this->list;
		this->size = rhs.size;
		this->list = new int[rhs.size];
		for (unsigned int i = 0; i < rhs.size; i++)
			this->list[i] = rhs.list[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int n)
{
	if (this->size - 1 == this->cursor)
		return ;
	for (unsigned int i = 0; i < this->size; i++)
	{
		if (this->list[i] == n)
			throw Span::AddNumberExecption();
	}
	this->list[++this->cursor] = n;
	for(unsigned int i = 0; i < this->size; i++)
		std::cout << this->list[i] << " ";
	std::cout << std::endl;
}

int Span::shortestSpan()
{
	int diff;

	diff = std::abs(this->list[0] - this->list[1]);
	if (this->size < 2)
		throw Span::SpanException();
	for (unsigned int i = 0; i <= this->cursor; i++)
	{
		for (unsigned int j = i + 1; j <= this->cursor; j++)
		{
			if (diff > std::abs(this->list[i] - this->list[j]))
				diff = std::abs(this->list[i] - this->list[j]);
		}
	}
	return diff;
}
int Span::longestSpan()
{
	int diff;

	diff = std::abs(this->list[0] - this->list[1]);
	if (this->size < 2)
		throw Span::SpanException();
	for (unsigned int i = 0; i <= this->cursor; i++)
	{
		for (unsigned int j = i + 1; j <= this->cursor; j++)
		{
			if (diff < std::abs(this->list[i] - this->list[j]))
				diff = std::abs(this->list[i] - this->list[j]);
		}
	}
	return diff;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::length() const
{
	return this->size;
}

/*
** --------------------------------- EXCEPTION --------------------------------
*/

const char* Span::AddNumberExecption::what() const throw()
{
	return "SpanException: value already in";
}
const char* Span::SpanException::what() const throw()
{
	return "SpanException: Span size is wrong";
}