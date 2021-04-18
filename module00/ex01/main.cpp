#include "phonebook.hpp"

void	eof_bye(void)
{
	if(std::cin.eof())
	{
		std::cout << "Bye." << std::endl;
		exit(1);
	}
}

int	main()
{
	std::string	input;
	contact	phonebook[8];
	int		contact_num;

	contact_num = 0;
	std::cout << "Welcome to My Awesome Phonebook. Please insert a command. (ADD, SEARCH OR EXIT)" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		eof_bye();
		if (!input.compare("EXIT"))
		{
			std::cout << "Thank you for using My Awesome Phonebook. \
We are clearing all the contacts in case of you using our service later. \
Thank you." << std::endl;
			return (0);
		}
		else if (!input.compare("ADD"))
		{
			if (contact_num == 8)
			{
				reset_contact(phonebook, &contact_num);
			}
			else
				phonebook[contact_num++].add_contact();
		}
		else if (!input.compare("SEARCH"))
			search_contact(phonebook, contact_num);
	}
	return (0);
}
