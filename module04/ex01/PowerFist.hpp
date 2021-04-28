#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist: public AWeapon
{
public:
	// Coplien's form
	PowerFist(std::string const& name = "Power Fist", int apcost = 8, int damage = 50);
	~PowerFist();
	PowerFist(PowerFist const& powerfist);
	PowerFist&	operator=(PowerFist const& powerfist);

	void	attack(void) const;
};


#endif
