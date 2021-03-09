#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 1, 1)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("Shubeery Creation", 145, 137)
{
	this->target = target;	
}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
: Form(src), target(src.target)
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		ShrubberyCreationForm tmp(rhs);
		*this = tmp;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);	
	
	std::ofstream file;
	file.open("Ascii tree", std::ios::out | std::ios::app);
	if (file.is_open())
	{
		file << "   #   \n";
		file << "  ###  \n";
		file << " ##### \n";
		file << "#######\n";
		file << "   |   \n";
		file.close();
	}
}