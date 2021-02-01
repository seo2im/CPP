#include "PresidentialPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(std::string const &target)
	: Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
}

void PresidentPardonForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
