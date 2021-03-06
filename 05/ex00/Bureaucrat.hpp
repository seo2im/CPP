#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat
{
	private :
		std::string const name;
		int grade;
		Bureaucrat();

	public :
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat( const Bureaucrat & src );
		~Bureaucrat();
		Bureaucrat & operator=( Bureaucrat const & rhs );

		void increaseGrade();
		void decreaseGrade();
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		std::string const &getName() const;
		int	getGrade() const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif