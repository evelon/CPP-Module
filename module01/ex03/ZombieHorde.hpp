#ifndef ZOMBIEHORDE_CPP
# define ZOMBIEHORDE_CPP
# include "Zombie.hpp"

class	ZombieHorde
{
private:
	Zombie*	Zombies;
	int		NbZombies;

public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	void	announce(void);
};

#endif
