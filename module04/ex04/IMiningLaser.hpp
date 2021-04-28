#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

# include "IAsteroid.hpp"

class	IMiningLaser
{
public:
	virtual ~IMiningLaser(void) {}
	virtual void	mine(IAsteroid*) = 0;
};

#endif
