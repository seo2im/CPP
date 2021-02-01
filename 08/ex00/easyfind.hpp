#ifndef EASTFIND_HPP
# define EASTFIND_HPP
# include <exception>
# include <memory>
# include <iostream>

class NotFoundException : public std::exception
{
    virtual const char* what() const throw() { return ("NotFoundExcetion : value is not in container"); }
};

/*
*	why iterator is error?
*/
template<template <typename, typename> class T>
void easyfind(T<int, std::allocator<int>> const &t, int n)
{
	typename T<int, std::allocator<int>>::const_iterator iter = t.begin();
	for (; iter != t.end(); iter++)
	{
		if (*iter == n)
			std::cout << *iter << std::endl;
	}
	throw NotFoundException();
}

#endif