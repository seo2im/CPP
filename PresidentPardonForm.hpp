#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

# include <iostream>
# include <string>

class PresidentPardonForm
{

	public:

		PresidentPardonForm();
		PresidentPardonForm( PresidentPardonForm const & src );
		~PresidentPardonForm();

		PresidentPardonForm &		operator=( PresidentPardonForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, PresidentPardonForm const & i );

#endif /* ********************************************* PRESIDENTPARDONFORM_H */