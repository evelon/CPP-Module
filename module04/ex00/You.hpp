#ifndef YOU_HPP
# define YOU_HPP

# include "Peon.hpp"

class	You: public Peon
{
public:
	You(std::string name = "you");
	~You();
	You(You const& you);
	You&	operator=(You const& you);
	void	getPolymorphed(void) const;
};

#endif
