#include <sstream>
#include "CentralBureaucracy.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static char	random_consonant(void)
{
	static char consonants[] = "bcdfghjklmnpqrstvwxyz";
	return (consonants[rand() % 21]);
}

static char	random_vowel(void)
{
	static char	vowels[] = "aeiou";
	return(vowels[rand() % 5]);
}

static std::string	random_name(void)
{
	std::stringstream ss;
	if (rand() % 2)
		ss << random_consonant();
	ss << random_vowel();
	if (rand() % 2)
		ss << random_consonant();
	if (rand() % 2)
	{
		if (rand() % 2)
			ss << random_consonant();
		ss << random_vowel();
		if (rand() % 2)
			ss << random_consonant();
	}

	std::string name;
	ss >> name;
	return (name);
}

int	main()
{
	srand(time(NULL));

	{
		CentralBureaucracy	cb;
		try
		{
			for (int i = 0; i < 20; i++)
			{
				cb.feedBureaucrat(new Bureaucrat(random_name(), rand() % 150 + 1));
			}
			for (int i = 0; i < rand() % 10; i++)
			{
				for (int j = 0; j < (rand() % 12 + rand() % 12) / 2; j++)
					cb.queueUp(random_name());
				for (int j = 0; j < rand() % 12; j++)
					cb.doBureaucracy();
			}
			while (1)
				cb.doBureaucracy();
		}
		catch(const std::exception& e)
		{
			std::cerr << "No petitioner left." << '\n';
		}
	}
	system("leaks a.out");
}
