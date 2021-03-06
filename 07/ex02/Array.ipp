// ref https://web.mst.edu/~cpp/common/CPPguides_list.html
#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template<typename T>
Array<T>::Array()
{
	this->len = 0;
	this->e = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->len = n;
	this->e = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &src)
{
	if (src.len > 0)
	{
		this->e = new T[src.len]();
		for(unsigned int i = 0; i < src.size(); i++)
			this->e[i] = src.e[i];
	}
	this->len = src.size();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template<typename T>
Array<T>::~Array()
{
	delete [] this->e;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs )
{
	if (this != &rhs)
	{
		if (this->e)
			delete [] this->e;	
		this->len = rhs.size();
		this->e = new T[this->len]();
		for (unsigned int i = 0; i < this->len; i++)
			this->e[i] = rhs.e[i];
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->len)
		throw Array::OverflowException();
	return (this->e[index]);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template<typename T>
unsigned int Array<T>::size() const
{
	return this->len;
}


template<typename T>
const char* Array<T>::OverflowException::what() const throw()
{
	return "ArrayException: index out of bounds";
}