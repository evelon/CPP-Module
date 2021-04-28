#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
private:
	int			idx;
	AMateria*	inventory[4];

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const& ms);
	virtual ~MateriaSource(void);
	MateriaSource&	operator=(MateriaSource const& ms);

	virtual void		learnMateria(AMateria* am);
	virtual AMateria*	createMateria(std::string const& type);

};

#endif
