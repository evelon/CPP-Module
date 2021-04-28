#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"

class	DeepCoreMiner: public IMiningLaser
{
public:
	DeepCoreMiner(void);
	DeepCoreMiner(DeepCoreMiner const& dcm);
	virtual ~DeepCoreMiner(void);
	DeepCoreMiner&	operator=(DeepCoreMiner const& dcm);
	virtual void	mine(IAsteroid* ia);
};

#endif
