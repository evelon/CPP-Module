#ifndef ASTEROID_HPP
# define ASTEROID_HPP

# include "IAsteroid.hpp"
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class	Asteroid: public IAsteroid
{
private:
	static std::string const	name;

public:
	Asteroid(void);
	Asteroid(Asteroid const& asteroid);
	virtual ~Asteroid(void);
	Asteroid&	operator=(Asteroid const& asteroid);

	virtual std::string	beMined(StripMiner* ml) const;
	virtual std::string	beMined(DeepCoreMiner* ml) const;
	virtual std::string	getName(void) const;
};

#endif
