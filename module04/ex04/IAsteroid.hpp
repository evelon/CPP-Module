#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include "IMiningLaser.hpp"

class	IAsteroid
{
public:
	virtual ~IAsteroid(void) {}
	virtual std::string	beMined(IMiningLaser*) const = 0;
	virtual std::string	getName() const = 0;
};

#endif
