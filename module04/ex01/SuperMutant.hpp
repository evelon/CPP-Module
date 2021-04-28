#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant: public Enemy
{
public:
	// Coplien's form
	SuperMutant(int hp = 170, std::string const& type = "Super Mutant");
	~SuperMutant();
	SuperMutant(SuperMutant const& supermutant);
	SuperMutant&	operator=(SuperMutant const& supermutant);
};

#endif
