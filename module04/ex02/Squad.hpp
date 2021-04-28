#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <cstddef>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class	Squad: public ISquad
{
private:
	int				count;
	ISpaceMarine**	units;

public:
	Squad(void);
	Squad(Squad const& squad);
	virtual ~Squad(void);
	Squad&	operator=(Squad const& squad);

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int N) const;
	virtual int				push(ISpaceMarine* spacemarine);
};

#endif
