#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm: public
{
private:
	std::string	target;

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& scf);
	~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& scf);

	std::string	getTarget(void);
};

#endif
