#include "phonebook.hpp"

void	reset_contact(contact *phonebook, int *contact_num)
{
	cout << "My Awesome Phonebook is full! For farther use, \
My Awesome Phonebook is erasing all the contacts." << endl;
	for (int i = 0; i < *contact_num; i++)
	{
		phonebook[i].first_name = "";
		phonebook[i].last_name = "";
		phonebook[i].nick_name = "";
		phonebook[i].postal_address = "";
		phonebook[i].email_address = "";
		phonebook[i].phone_number = "";
		phonebook[i].birthday_date = "";
		phonebook[i].favorite_meal = "";
		phonebook[i].underwear_color = "";
		phonebook[i].darkest_secret = "";
	}
	*contact_num = 0;
	return ;
}

void	add_contact(contact *adding_one)
{
	string	name;
	string	input;

	cout << "You choose to add a new contact! To add a contact, \
please type in the following information.\n\
First, type in the first name of the new contact." << endl;
	cin >> name;
	(*adding_one).first_name = name;
	cout << "Secondly, type in " << name << "'s last name." << endl;
	cin >> input;
	(*adding_one).last_name = input;
	cout << "Thirdly, type in " << name << "'s nick_name." << endl;
	cin >> input;
	(*adding_one).nick_name = input;
	cout << "Fourthly, type in " << name << "'s post address." << endl;
	cin >> input;
	(*adding_one).postal_address = input;
	cout << "Fiftly, type in " << name << "'s email address." << endl;
	cin >> input;
	(*adding_one).email_address = input;
	cout << "Sixthly, type in " << name << "'s phone number" << endl;
	cin >> input;
	(*adding_one).phone_number = input;
	cout << "Seventhly, type in " << name << "'s birthday." << endl;
	cin >> input;
	(*adding_one).birthday_date = input;
	cout << "Eighthly, type in " << name << "'s favorite meal." << endl;
	cin >> input;
	(*adding_one).favorite_meal = input;
	cout << "Ninethly, type in " << name << "'s underwear color." << endl;
	cin >> input;
	(*adding_one).underwear_color = input;
	cout << "Tenthly, type in " << name << "'s darkest secret." << endl;
	cin >> input;
	(*adding_one).darkest_secret = input;
	cout << "Well done! You successfully typed in all the fields of a contact of My Awesome Phonebook. \
It will keep the contact secretly and safely." << endl;
	return ;
}

string	get_short(string str)
{
	string	new_str;

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

// void	print_contact(contact *phonebook)
// {

// }

void	search_contact(contact *phonebook, int contact_num)
{
	if (contact_num == 0)
	{
		cout << "No contact at all!" << endl;
		return ;
	}
	cout << "/-------------------------------------------\\\n";
	cout << "|     index|first name| last name|  nickname|\n";
	if (contact_num >= 1)
		cout << "|-------------------------------------------|\n";
	for (int i = 0; i < contact_num; i++)
		cout << "|         " << i << '|' \
			<< get_short(phonebook[i].first_name)
			<< get_short(phonebook[i].last_name)
			<< get_short(phonebook[i].nick_name) << '\n';
	cout << "\\-------------------------------------------/" << endl;

	int input;
	cin >> input;
	if (cin.eof() || cin.fail() || input < 0 || input >= contact_num)
	{
		cout << "Wrong input. You failed to search." << endl;
		return ;
	}
	cout << input << endl;
	return ;
}

int	main()
{
	string	input;
	contact	phonebook[8];
	int		contact_num;

	contact_num = 0;
	cout << "Welcome to My Awesome Phonebook. Please insert a command. (ADD, SEARCH OR EXIT)" << endl;
	while (1)
	{
		getline(cin, input);
		if (cin.eof())
		{
			cout << "Bye." << endl;
			return (0);
		}
		if (!input.compare("EXIT"))
		{
			cout << "Thank you for using My Awesome Phonebook. \
We are clearing all the contacts in case of you using our service later. \
Thank you." << endl;
			return (0);
		}
		else if (!input.compare("ADD"))
		{
			if (contact_num == 8)
			{
				reset_contact(phonebook, &contact_num);
			}
			else
				add_contact(&phonebook[contact_num++]);
		}
		else if (!input.compare("SEARCH"))
			search_contact(phonebook, contact_num);
	}
	return (0);
}
