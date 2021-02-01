#include "span.hpp"
#include <iostream>

Span::Span(unsigned int const size)
{
	this->list = new int[size];
	this->size = size;
	this->cursor = -1;
}
Span::~Span()
{
	delete this->list;
}


unsigned int Span::length() const
{
	return this->size;
}


void Span::addNumber(int n)
{
	if (this->size - 1 == this->cursor)
		return ;
	for (int i = 0; i < this->size; i++)
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
	for (int i = 0; i <= this->cursor; i++)
	{
		for (int j = i + 1; j <= this->cursor; j++)
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
	for (int i = 0; i <= this->cursor; i++)
	{
		for (int j = i + 1; j <= this->cursor; j++)
		{
			if (diff < std::abs(this->list[i] - this->list[j]))
				diff = std::abs(this->list[i] - this->list[j]);
		}
	}
	return diff;
}


const char* Span::AddNumberExecption::what() const throw()
{
	return "SpanException: value already in";
}
const char* Span::SpanException::what() const throw()
{
	return "SpanException: Span size is wrong";
}