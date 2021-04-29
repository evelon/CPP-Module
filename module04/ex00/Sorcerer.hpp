#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Person.hpp"
# include "Victim.hpp"

class	Sorcerer: virtual protected Person
{
private:
	Sorcerer();

protected:
	std::string	title;

public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(Sorcerer const& sorcerer);
	Sorcerer&	operator=(Sorcerer const& sorcerer);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void polymorph(Victim const& victim) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const& sorcerer);

#endif
