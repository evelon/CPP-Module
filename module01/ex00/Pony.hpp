#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
	int			total_legs;
	bool		right_foreleg;
	bool		left_foreleg;
	bool		right_hindleg;
	bool		left_hindleg;
	int			extra_legs;

public:
	void	Run(void);
	Pony(void);
	Pony(int num_legs);
	~Pony();
};

void	ponyOnTheHeap(int legs);
void	ponyOnTheStack(int legs);

#endif
