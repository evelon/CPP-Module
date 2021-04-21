#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{
private:
	std::string	Name;
	std::string	Type;

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void	announce(void);
};

#endif
