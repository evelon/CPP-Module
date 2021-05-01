#ifndef ROBOTOMYMYREQUESTFORM_HPP
# define ROBOTOMYMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm: public Form
{
private:
	static const int	gradeSign = 72;
	static const int	executeSign = 45;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& rrf);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm&	operator=(RobotomyRequestForm const& rrf);

	virtual void		execute(Bureaucrat const& brcrt) const throw(CauseException);
};

#endif