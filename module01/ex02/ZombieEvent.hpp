#include "Zombie.hpp"

class	ZombieEvent
{
private:
	static std::string	Type;
public:
	static void		setZombieType(std::string type);
	static Zombie*	newZombie(std::string name);
	static Zombie	randomChump(void);
};