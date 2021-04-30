#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	srand(time(NULL));

	try
	{
		Bureaucrat	alpha("alpha", 3);
		Bureaucrat	beta("beta", 15);
		Bureaucrat	gamma("gamma", 30);
		Bureaucrat	delta("delta", 55);
		Bureaucrat	epsilon("epsilon", 75);
		Bureaucrat	zeta("zeta", 140);
		Bureaucrat	eta("eta", 150);

		std::cout << alpha << beta << gamma << delta << epsilon \
		<< zeta << eta << '\n';

		Bureaucrat	brcrts[7] = {eta, zeta, epsilon, delta, gamma, beta, alpha};

		ShrubberyCreationForm	scf("home");
		RobotomyRequestForm		rrf("you");
		PresidentialPardonForm	ppf("me");

		std::cout << scf << rrf << ppf << '\n';

		for (int i = 0; i < 7; i++)
		{
			brcrts[i].executeForm(scf);
			brcrts[i].executeForm(rrf);
			brcrts[i].executeForm(ppf);
		}
		for (int i = 0; i < 7; i++)
		{
			brcrts[i].signForm(scf);
			brcrts[i].signForm(rrf);
			brcrts[i].signForm(ppf);
		}
		for (int i = 0; i < 7; i++)
		{
			brcrts[i].executeForm(scf);
			brcrts[i].executeForm(rrf);
			brcrts[i].executeForm(ppf);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}