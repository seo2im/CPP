#include "PresidentPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentPardonForm::PresidentPardonForm()
{
}

PresidentPardonForm::PresidentPardonForm( const PresidentPardonForm & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentPardonForm::~PresidentPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentPardonForm &				PresidentPardonForm::operator=( PresidentPardonForm const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */