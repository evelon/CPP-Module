#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>

# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class	StripMiner;
class	DeepCoreMiner;

class	IAsteroid
{
public:
	virtual ~IAsteroid(void) {}
	virtual std::string	beMined(StripMiner* sm) const = 0;
	virtual std::string	beMined(DeepCoreMiner* dcm) const = 0;
	virtual std::string	getName() const = 0;
};

#endif
