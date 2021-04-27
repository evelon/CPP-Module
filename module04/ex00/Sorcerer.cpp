#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
	Person(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. \
Consequences will never be the same\n";
}

Sorcerer::Sorcerer(Sorcerer const& sorcerer)
{
	*this = sorcerer;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const& sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (this->name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const& victim) const
{
	victim.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& os, Sorcerer const& sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() \
	<< ", and I like ponies!\n";
	return (os);
}
