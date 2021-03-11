#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private :
		std::string const name;
		int const signGrade;
		int const excuteGrade;
		bool isSigned;
		Form();

	public :
		Form(std::string const name, int const signGrade, int const excuteGrade);
		virtual ~Form();
		Form( const Form & src );
		Form & operator=( Form const & rhs );

		bool IsSigned() const;
		void beSigned(Bureaucrat const &bureaucrat);
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class UnsignedFormException: public std::exception {
			virtual const char* what() const throw();
		};
		virtual void excute(Bureaucrat const &executor) const = 0;

		std::string getName() const;
		int getSignGrade() const;
		int getExcuteGrade() const;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif