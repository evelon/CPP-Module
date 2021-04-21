#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{
private:
	std::string	Name;
	std::string	Type;

public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void	setAttribute(std::string name, std::string type);
	void	announce(void);
};

#endif
