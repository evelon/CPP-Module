#include "Brain.hpp"

class Human
{
private:
	const Brain	brain;

public:
	Human(void);
	~Human(void);
	Brain		getBrain(void);
	std::string	identify(void) const;
};
