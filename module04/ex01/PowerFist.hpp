#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist: public AWeapon
{
public:
	// Coplien's form
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const& powerfist);
	PowerFist&	operator=(PowerFist const& powerfist);

	void	attack(void) const;
};


#endif
