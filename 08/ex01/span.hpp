#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
# include <cmath>

class Span
{
	private :
		int *list;
		unsigned int size;
		unsigned int cursor;

	public :
		Span(unsigned int const N);
		~Span();

		unsigned int length() const;

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		class AddNumberExecption: public std::exception {
			virtual const char* what() const throw();
		};
		class SpanException: public std::exception {
			virtual const char* what() const throw();
		};
};

#endif