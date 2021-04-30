#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form(
		"Robotomy Request Form",
		target,
		RobotomyRequestForm::gradeSign,
		RobotomyRequestForm::executeSign
		)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& rrf):
	Form(
		"Robotomy Request Form",
		rrf.getTarget(),
		RobotomyRequestForm::gradeSign,
		RobotomyRequestForm::executeSign
		)
{
	this->setSign(rrf.isSigned());
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rrf)
{
	this->setSign(rrf.isSigned());
	this->setTarget(rrf.getTarget());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& brcrt) const throw(std::exception)
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (brcrt.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();

	std::cout << "* Drilling noises *\n* Drrrrrr.... *\n* Drrrrrr.... *\n* Drrrrrr.... *\n\n";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << this->getTarget() << " is not robotomized. It's a failure.\n";

}