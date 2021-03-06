#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle: public AWeapon
{
public:
	// Coplien's form
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& plasmarifle);
	PlasmaRifle&	operator=(PlasmaRifle const& plasmarifle);

	void	attack(void) const;
};

#endif
