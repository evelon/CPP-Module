#include "ZombieHorde.hpp"
#include <sstream>

static time_t	get_current_time(void)
{
	time_t	n;
	time(&n);
	return (n);
}

static char	random_consonant(void)
{
	static time_t	n = get_current_time();
	n += n;
	std::srand(n);

	static char consonants[] = "bcdfghjklmnpqrstvwxyz";
	return (consonants[rand() % 21]);
}

static char	random_vowel(void)
{
	static time_t	n = get_current_time();
	n *= 3;
	std::srand(n);

	static char	vowels[] = "aeiou";
	return(vowels[rand() % 5]);
}

static std::string	random_name(void)
{
	static time_t	n = get_current_time();
	n *= 4;
	std::srand(n);

	std::stringstream ss;
	if (rand() % 2)
		ss << random_consonant();
	ss << random_vowel();
	std::srand(++n);
	if (rand() % 2)
		ss << random_consonant();
	std::srand(++n);
	if (rand() % 2)
	{
		std::srand(++n);
		if (rand() % 2)
			ss << random_consonant();
		ss << random_vowel();
		std::srand(++n);
		if (rand() % 2)
			ss << random_consonant();
	}

	std::string name;
	ss >> name;
	return (name);
}

ZombieHorde::ZombieHorde(int N):
	NbZombies(N)
{
	this->Zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		Zombies[i].setAttribute(random_name(), "Horde");
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] Zombies;
	return ;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < NbZombies; i++)
		Zombies[i].announce();
	return ;
}