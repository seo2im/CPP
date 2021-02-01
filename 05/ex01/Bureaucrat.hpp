#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private :
		std::string const name;
		int grade;

	public :
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();

		std::string getName() const;
		int	getGrade() const;

		void increaseGrade();
		void decreaseGrade();
		void signForm(Form &from);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif