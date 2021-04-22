#include "Fixed.class.hpp"

Fixed::Fixed(void):
	value(0) {}

Fixed::Fixed(const int n):
	value(n << 8) {}

Fixed::Fixed(const float f)
{
	float temp;
	temp = f * (1 << (this->fraction));
	this->value = (int)roundf(temp);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed& fixed)
{
	*this = fixed;
}

Fixed::Fixed(Fixed const& fixed)
{
	*this = fixed;
}

Fixed&	Fixed::operator= (const Fixed& fixed)
{
	if (&fixed != this)
		this->value = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const& fixed)
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const& fixed)
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const& fixed)
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const& fixed)
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const& fixed)
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const& fixed)
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed)
{
	return(Fixed(this->getRawBits() + fixed.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const& fixed)
{
	return(Fixed(this->getRawBits() - fixed.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const& fixed)
{
	return(Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& fixed)
{
	return(Fixed(this->toFloat() / fixed.toFloat()));
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
	return ((float)this->value / (1 << this->fraction));
}

std::ostream& operator<<(std::ostream& os, Fixed const& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed&	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (temp);
}

Fixed const&	Fixed::min(Fixed const& alpha, Fixed const& beta)
{
	if (alpha.getRawBits() >= beta.getRawBits())
		return (beta);
	return (alpha);
}

Fixed const&	Fixed::max(Fixed const& alpha, Fixed const& beta)
{
	if (alpha.getRawBits() <= beta.getRawBits())
		return (beta);
	return (alpha);
}
