#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	srand(time(NULL));

	try
	{
		Intern	no_one;
		Form*	form;
		std::string	names[4] =
		{
			"random form",
			"Shrubbery Creation Form",
			"Robotomy Request Form",
			"Presidential Pardon Form"
		};

		for (int i = 0; i < 4; i++)
		{
			form = no_one.makeForm(names[i], "no_one");
			if (form)
			{
				std::cout << *form;
				delete form;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
