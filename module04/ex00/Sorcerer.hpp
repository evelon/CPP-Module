#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Person.hpp"
# include "Victim.hpp"

class	Sorcerer: virtual protected Person
{
protected:
	std::string	title;

public:
	Sorcerer(std::string name = "sorcerer", std::string title = "title");
	~Sorcerer();
	Sorcerer(Sorcerer const& sorcerer);
	Sorcerer&	operator=(Sorcerer const& sorcerer);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void polymorph(Victim const& victim) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const& sorcerer);

#endif
