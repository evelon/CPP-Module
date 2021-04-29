#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void):
	idx(0)
{
	for (int i = 0; i < this->size; i++)
		this->lasers[i] = NULL;
}

MiningBarge::MiningBarge(MiningBarge const& mb):
	idx(mb.idx)
{
	for (int i = 0; i < this->size; i++)
		this->lasers[i] = NULL;
	for (int i = 0; i < this->idx; i++)
		this->lasers[i] = mb.lasers[i];
}

MiningBarge::~MiningBarge(void) {}

MiningBarge&	MiningBarge::operator=(MiningBarge const& mb)
{
	for (int i = 0; i < this->size; i++)
		this->lasers[i] = NULL;
	this->idx = mb.idx;
	for (int i = 0; i < this->idx; i++)
		this->lasers[i] = mb.lasers[i];
	return (*this);
}

void	MiningBarge::equip(IMiningLaser*	ml)
{
	if (this->idx >= 4)
		return ;
	this->lasers[this->idx++] = ml;
}

void	MiningBarge::mine(IAsteroid*	asteroid) const
{
	for (int i = 0; i < this->idx; i++)
		this->lasers[i]->mine(asteroid);
}