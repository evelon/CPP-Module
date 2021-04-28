#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class	StripMiner: public IMiningLaser
{
public:
	StripMiner(void);
	StripMiner(StripMiner const& sm);
	virtual ~StripMiner(void);
	StripMiner&	operator=(StripMiner const& sm);
	virtual void	mine(IAsteroid* ia);
};

#endif
