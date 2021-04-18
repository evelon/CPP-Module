#include "phonebook.hpp"

void	contact::delete_contact(void)
{
	first_name = "";
	last_name = "";
	nick_name = "";
	login = "";
	postal_address = "";
	email_address = "";
	phone_number = "";
	birthday_date = "";
	favorite_meal = "";
	underwear_color = "";
	darkest_secret = "";
}

void	reset_contact(contact *phonebook, int *contact_num)
{
	std::cout << "My Awesome Phonebook is full! For farther use, \
My Awesome Phonebook is erasing all the contacts." << std::endl;
	for (int i = 0; i < *contact_num; i++)
		phonebook[i].delete_contact();
	*contact_num = 0;
	return ;
}

void	contact::add_contact(void)
{
	std::string	name;
	std::string	input;

	std::cout << "You choose to add a new contact! To add a contact, \
please type in the following information.\n\
First, type in the first name of the new contact." << std::endl;
	std::getline(std::cin, name);
	eof_bye();
	first_name = name;
	std::cout << "Secondly, type in " << name << "'s last name." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	last_name = input;
	std::cout << "Thirdly, type in " << name << "'s nick_name." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	nick_name = input;
	std::cout << "Fourthly, type in " << name << "'s post address." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	login = input;
	std::cout << "Fiftly, type in " << name << "'s login." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	postal_address = input;
	std::cout << "Sixthly, type in " << name << "'s email address." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	email_address = input;
	std::cout << "Seventhly, type in " << name << "'s phone number" << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	phone_number = input;
	std::cout << "Eighthly, type in " << name << "'s birthday." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	birthday_date = input;
	std::cout << "Ninethly, type in " << name << "'s favorite meal." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	favorite_meal = input;
	std::cout << "Tenthly, type in " << name << "'s underwear color." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	underwear_color = input;
	std::cout << "Eleventhly, type in " << name << "'s darkest secret." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	darkest_secret = input;
	std::cout << "Well done! You successfully typed in all the fields of a contact of My Awesome Phonebook. \
It will keep the contact secretly and safely." << std::endl;
	return ;
}

static std::string	get_short(std::string str)
{
	std::string	new_str;

	new_str = "";
	if (str.length() <= 10)
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			new_str += ' ';
		new_str += str + '|';
	}
	else
		new_str += str.substr(0, 9) + ".|";
	return (new_str);
}

void	contact::print_short_contact(int index)
{
	std::cout << "|         " << index << '|' \
		<< get_short(first_name)
		<< get_short(last_name)
		<< get_short(nick_name) << '\n';
}

void	contact::print_contact(int index)
{
	std::cout << "Here is the information of the index number " << index << "." << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nick name: " << nick_name << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Post address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void	search_contact(contact *phonebook, int contact_num)
{
	if (contact_num == 0)
	{
		std::cout << "No contact at all!" << std::endl;
		return ;
	}
	std::cout << "/-------------------------------------------\\\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	if (contact_num >= 1)
		std::cout << "|----------+----------+----------+----------|\n";
	for (int i = 0; i < contact_num; i++)
		phonebook[i].print_short_contact(i);
	std::cout << "\\-------------------------------------------/" << std::endl;

	int			index;
	std::string	dump;

	std::cin >> index;

	if (std::cin.eof() || !std::cin)
	{
		std::cin.clear();
		std::cout << "Wrong input. You failed to search." << std::endl;
		std::cin >> dump;
		return ;
	}
	phonebook[index].print_contact(index);
	return ;
}
