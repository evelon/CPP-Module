#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant: public Enemy
{
public:
	// Coplien's form
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const& supermutant);
	SuperMutant&	operator=(SuperMutant const& supermutant);

	void	takeDamage(int damage);
};

#endif
