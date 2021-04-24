#include "Point.hpp"

Point::Point():
	num(0) {}

Point::Point(unsigned int un):
	num(un)
{
	if (num >= 100)
		this->num = 100;
}

Point::~Point() {}

Point::Point(Point const& point)
{
	this->num = point.num;
}

Point&	Point::operator=(Point const& point)
{
	this->num = point.num;
	return (*this);
}

Point	Point::operator+(Point const& point) const
{
	Point num(this->getNum() + point.getNum());
	if (num >= 100)
		num = 100;
	return (num);
}

Point	Point::operator-(Point const& point) const
{
	if (point.num > this->num)
		return (Point(0));
	return (Point(this->num - point.num));
}

Point&	Point::operator+=(Point const& point)
{
	*this = *this + point;
	return (*this);
}

Point&	Point::operator-=(Point const& point)
{
	*this = *this - point;
	return (*this);
}


bool	Point::operator<(Point const& point) const
{
	return (this->getNum() < point.getNum());
}

bool	Point::operator<=(Point const& point) const
{
	return (this->getNum() <= point.getNum());
}

bool	Point::operator>(Point const& point) const
{
	return (this->getNum() > point.getNum());
}

bool	Point::operator>=(Point const& point) const
{
	return (this->getNum() >= point.getNum());
}

bool	Point::operator==(Point const& point) const
{
	return (this->getNum() == point.getNum());
}

bool	Point::operator!=(Point const& point) const
{
	return (this->getNum() < point.getNum());
}


unsigned int	Point::getNum(void) const
{
	return (this->num);
}


std::ostream&	operator<<(std::ostream& os, Point const& point)
{
	os << point.getNum();
	return (os);
}
