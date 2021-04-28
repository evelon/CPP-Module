#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"

class	MiningBarge
{
private:
	static int const	size = 4;
	int					idx;
	IMiningLaser*		lasers[MiningBarge::size];

public:
	MiningBarge(void);
	MiningBarge(MiningBarge const& mb);
	~MiningBarge(void);
	MiningBarge&	operator=(MiningBarge const& mb);

	void	equip(IMiningLaser*	ml);
	void	mine(IAsteroid*	asteroid) const;
};

#endif
