#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	fraction = 8;

public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed(void);
	Fixed(Fixed& fixed);
	Fixed(Fixed const& fixed);
	Fixed&	operator=(const Fixed& fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

typedef union
{
	float f;
	struct
	{
		unsigned int mantissa : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	};
}	float_cast;

std::ostream&	operator<<(std::ostream& os, Fixed const& fixed);

#endif
