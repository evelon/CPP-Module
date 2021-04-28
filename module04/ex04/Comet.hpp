#ifndef COMET_HPP
# define COMET_HPP

# include "IAsteroid.hpp"
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class	Comet: public IAsteroid
{
private:
	static std::string const	name;

public:
	Comet(void);
	Comet(Comet const& comet);
	virtual ~Comet(void);
	Comet&	operator=(Comet const& comet);

	virtual std::string	beMined(StripMiner* ml) const;
	virtual std::string	beMined(DeepCoreMiner* ml) const;
	virtual std::string	getName(void) const;
};

#endif
