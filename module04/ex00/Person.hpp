#ifndef PERSON_HPP
# define PERSON_HPP

# include <iostream>

class	Person
{
protected:
	std::string	name;

public:
	Person();
	Person(std::string name);
	virtual ~Person();
	Person(Person const& person);
	Person&	operator=(Person const& person);
};

#endif
