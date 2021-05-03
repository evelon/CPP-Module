#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <cstdlib>
# include <ctime>
# include <cstring>
# include <string>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void*	serialize(void);
Data*	deserialize(void* raw);

#endif
