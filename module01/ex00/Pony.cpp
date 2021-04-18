#include "Pony.hpp"

void	Pony::Run(void)
{
	if (total_legs == 0)
		std::cout << "Poor pony cannot run without any leg." << std::endl;
	else if (total_legs == 1)
		std::cout << "Run, pony, run! Pony is now running with its only leg." << std::endl;
	else
		std::cout << "Run, pony, run! Pony is now running with its " << total_legs << " legs." << std::endl;
}

Pony::Pony(void)
{
	total_legs = 0;
	right_foreleg = false;
	left_foreleg = false;
	right_hindleg = false;
	left_hindleg = false;
	extra_legs = 0;

	std::cout << "Poor legless pony created." << std::endl;
}

Pony::Pony(int num_legs)
{
	right_foreleg = false;
	left_foreleg = false;
	right_hindleg = false;
	left_hindleg = false;
	extra_legs = 0;

	total_legs = num_legs;
	if (num_legs-- > 0)
		right_foreleg = true;
	if (num_legs-- > 0)
		left_foreleg = true;
	if (num_legs-- > 0)
		right_hindleg = true;
	if (num_legs-- > 0)
		left_hindleg = true;
	if (num_legs > 0)
	{
		extra_legs = num_legs;
		std::cout << "Pony legs overload! Extra " << extra_legs << " legs!" << std::endl;
	}
}

Pony::~Pony(void)
{
	if (total_legs == 0)
	{
		std::cout << "Poor pony is devoured by you. Yumyum." << std::endl;
		return ;
	}
	if (right_foreleg)
		std::cout << "The pony lost its right foreleg.\n";
	if (left_foreleg)
		std::cout << "The pony lost its left foreleg.\n";
	if (right_hindleg)
		std::cout << "The pony lost its right hind leg.\n";
	if (left_hindleg)
		std::cout << "The pony lost its left hind leg.\n";
	for (int i = 0; i < extra_legs; i++)
	{
		std::cout << "The pony has " << extra_legs - i;
		if (i == extra_legs - 1)
			std::cout << " dangling leg.\n";
		else
			std::cout << " dangling legs.\n";
	}
	if (total_legs < 0)
		std::cout << "The pony lost all of its internal legs.\n";
	std::cout << "Now the pony only has its body and tail.\nGood bye pony! We enjoyed the moment we spent together.\n";
	std::cout << "Yumyum." << std::endl;
	return ;
}

void	ponyOnTheHeap(int legs)
{
	Pony *pony = new Pony(legs);

	if (!pony)
		return ;
	(*pony).Run();
	delete pony;
	pony = NULL;
	return ;
}


void	ponyOnTheStack(int legs)
{
	Pony pony(legs);

	pony.Run();
	return ;
}