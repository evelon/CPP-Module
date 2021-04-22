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
	float temp;
	temp = f * (1 << this->fraction);
	this->value = (int)roundf(temp);
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

Fixed::Fixed(Fixed const& fixed)
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
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int		Fixed::toInt(void) const
{
	int n = (int)roundf(this->toFloat());
	return (n);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fraction ));
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed)
{
	os << fixed.toFloat();
	return (os);
}
