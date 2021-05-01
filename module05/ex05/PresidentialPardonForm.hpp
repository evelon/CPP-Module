#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm: public Form
{
private:
	static const int	gradeSign = 25;
	static const int	executeSign = 5;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& ppf);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm&	operator=(PresidentialPardonForm const& ppf);

	virtual void		execute(Bureaucrat const& brcrt) const throw(CauseException);
};

#endif