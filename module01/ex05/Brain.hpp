#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
private:
	std::string	leftHemisphere;
	std::string	rightHemisphere;

public:
	Brain(void);
	~Brain(void);
	std::string	identify(void) const;
};

#endif
