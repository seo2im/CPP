#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <cctype>
# include <iostream>

template<typename T>
class Array
{
	private :
		unsigned int len;
		T *e;
	
	public :
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		virtual ~Array();

		Array &operator=(Array const & rhs);
		T &operator[](unsigned int index);
		
		unsigned int size() const;
		class OverflowException: public std::exception {
			virtual const char* what() const throw();
		};
};

# include "Array.ipp"

#endif