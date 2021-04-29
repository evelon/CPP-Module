#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
protected:
	int			hitPoints;
	std::string	type;
	Enemy();

public:
	// Coplien's form
	Enemy(int hp, std::string const& type);
	virtual ~Enemy();
	Enemy(Enemy const& enemy);
	Enemy&	operator=(Enemy const& enemy);

	std::string		getType(void) const;
	int				getHP(void) const;
	virtual void	takeDamage(int damage) = 0;
};

#endif
