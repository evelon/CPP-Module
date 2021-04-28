#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
protected:
	int			hitPoints;
	std::string	type;

public:
	// Coplien's form
	Enemy(int hp = 100, std::string const& type = "enemy");
	virtual ~Enemy();
	Enemy(Enemy const& enemy);
	Enemy&	operator=(Enemy const& enemy);

	std::string		getType(void) const;
	int				getHP(void) const;
	virtual void	takeDamage(int damage);
};

#endif
