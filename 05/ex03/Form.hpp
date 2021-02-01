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
		bool isSigned;
		int const signGrade;
		int const excuteGrade;

	public :
		Form(std::string const name, int const signGrade, int const excuteGrade);
		~Form();

		std::string getName() const;
		bool IsSigned() const;
		int getSignGrade() const;
		int getExcuteGrade() const;
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void excute(Bureaucrat const &executor) const;

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class UnsignedFormException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif