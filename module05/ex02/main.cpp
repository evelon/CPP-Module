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

		std::cout << "Try to execute forms.\n";
		for (int i = 0; i < 7; i++)
		{
			std::cout << brcrts[i];
			brcrts[i].executeForm(scf);
			brcrts[i].executeForm(rrf);
			brcrts[i].executeForm(ppf);
			std::cout << '\n';
		}

		std::cout << "Try to sign forms.\n";
		for (int i = 0; i < 7; i++)
		{
			std::cout << brcrts[i];
			brcrts[i].signForm(scf);
			brcrts[i].signForm(rrf);
			brcrts[i].signForm(ppf);
			std::cout << '\n';
		}

		std::cout << "Try to execute forms.\n";
		for (int i = 0; i < 7; i++)
		{
			std::cout << brcrts[i];
			brcrts[i].executeForm(scf);
			brcrts[i].executeForm(rrf);
			brcrts[i].executeForm(ppf);
			std::cout << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}