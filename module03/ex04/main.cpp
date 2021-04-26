#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	FragTrap ft("hoi");
	ScavTrap st("thanh");
	NinjaTrap nt("dau");
	SuperTrap spt("sac");

	spt.vaulthunter_dot_exe("you");
	spt.ninjaShoeBox(ft);
	spt.ninjaShoeBox(st);
	spt.ninjaShoeBox(nt);
	return (0);
}