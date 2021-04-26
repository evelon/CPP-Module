#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
private:
	std::string	name;
	std::string	title;

public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(Sorcerer const& sorcerer);
	Sorcerer&	operator=(Sorcerer const& sorcerer);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void polymorph(Victim const& victim) const;
};

std::ostream&	operator<<(std::ostream const& os, Sorcerer const& sorcerer);

#endif
