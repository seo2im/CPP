#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("Shubeery Creation", 145, 137)
{
	this->target = target;	
}

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