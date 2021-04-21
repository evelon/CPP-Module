#include "Fixed.class.hpp"

Fixed::Fixed(void):
	value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n):
	value(n << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	float_cast	cast = {.f = f};
	this->value |= cast.sign << (32 - 1);
	this->value |= cast.mantissa >> (23 - (this->fraction - 1) - (cast.exponent - 127));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed&	Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (&fixed != this)
		this->value = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int		Fixed::toInt(void) const
{
	int	sign = this->value & INT32_MIN;
	int	unsigned_value = this->value & INT32_MAX;
	int	n = unsigned_value >> (this->fraction - 1);
	++n >> 1;
	return (n);
}

float	Fixed::toFloat(void) const
{
	(float)
}

std::ostream& operator<<(std::ostream& os, Fixed& fixed)
{

}