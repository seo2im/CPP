#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->len = 0;
	this->e = nullptr;
}
template<typename T>
Array<T>::Array(size_t n)
{
	this->len = n;
	this->e = new T[n]();
}
template<typename T>
Array<T>::Array(Array const &other)
{
	this->len = other.size();
	this->e = new T[this->len]();
	for(size_t i = 0; i < this->size; i++)
		this->e[i] = other[i];
}


template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= this->len)
		throw Array::OverflowException();
	return (this->e[index]);
}


template<typename T>
size_t Array<T>::size() const
{
	return this->len;
}


template<typename T>
const char* Array<T>::OverflowException::what() const throw()
{
	return "ArrayException: index out of bounds";
}