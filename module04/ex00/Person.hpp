#ifndef PERSON_HPP
# define PERSON_HPP

# include <iostream>

class	Person
{
protected:
	std::string	name;

public:
	Person(std::string name = "person");
	~Person();
	Person(Person const& person);
	Person&	operator=(Person const& person);
};

#endif
