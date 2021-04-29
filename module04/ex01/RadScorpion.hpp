#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion: public Enemy
{
public:
	// coplien's form
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const& radscorpion);
	RadScorpion&	operator=(RadScorpion const& radscorpion);

	void	takeDamage(int damage);
};

#endif
