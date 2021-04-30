#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iostream>

# include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
private:
	static const int	gradeSign = 145;
	static const int	executeSign = 137;

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& scf);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& scf);

	virtual void		execute(Bureaucrat const& brcrt) const;
};

#define TREES "\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n\
from https://ascii.co.uk/art/tree\n"

#endif
