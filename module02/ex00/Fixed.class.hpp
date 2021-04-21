#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fraction = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed& fixed);
	Fixed&	operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
