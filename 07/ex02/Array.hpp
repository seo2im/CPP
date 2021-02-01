#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <cctype>

template<typename T>
class Array
{
	private :
		size_t len;
		T *e;
	
	public :
		Array();
		Array(size_t n);
		Array(Array<T> const &other);
		~Array() {};

		T &operator[](size_t index);
		size_t size() const;

		class OverflowException: public std::exception {
			virtual const char* what() const throw();
		};
};

# include "Array.ipp"

#endif