#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
# include <cmath>
# include <iostream>

class Span
{
	private :
		int *list;
		unsigned int size;
		unsigned int cursor;
		Span();

	public :
		Span(unsigned int const N);
		Span(const Span & src);
		~Span();
		Span & operator=(Span const & rhs);
		int & operator[](unsigned int index);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		
		unsigned int length() const;

		class AddNumberExecption: public std::exception {
			virtual const char* what() const throw();
		};
		class SpanException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Span &sp);

#endif
