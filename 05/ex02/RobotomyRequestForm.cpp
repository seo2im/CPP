#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
}

void RobotomyRequestForm::excute(Bureaucrat const &executor) const
{
	Form::excute(executor);
	if ((rand() % 100) > 50)
		std::cout << this->target << " has been successfully" << std::endl;
	else
		std::cout << this->target << " is a failure" << std::endl;
}