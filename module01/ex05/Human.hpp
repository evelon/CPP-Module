#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
private:
	const Brain	brain;

public:
	Human(void);
	~Human(void);
	const Brain&	getBrain(void);
	std::string		identify(void) const;
};

#endif
