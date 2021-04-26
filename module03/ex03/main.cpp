#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	FragTrap ft("hoi");
	ScavTrap st("thanh");
	NinjaTrap nt1("dau");
	NinjaTrap nt2("sac");

	nt1.ninjaShoeBox(ft);
	nt1.ninjaShoeBox(st);
	nt1.ninjaShoeBox(nt2);
	return (0);
}