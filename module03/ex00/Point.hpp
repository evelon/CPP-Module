#ifndef POINT_HPP
# define POINT_HPP

# include <ostream>

class	Point
{
private:
	unsigned int	num;

public:
	Point();
	Point(unsigned int un);
	~Point();
	Point(Point const& point);
	Point&	operator=(Point const& point);
	Point	operator+(Point const& point) const;
	Point	operator-(Point const& point) const;
	Point&	operator+=(Point const& point);
	Point&	operator-=(Point const& point);
	bool	operator<(Point const& point) const;
	bool	operator<=(Point const& point) const;
	bool	operator>(Point const& point) const;
	bool	operator>=(Point const& point) const;
	bool	operator==(Point const& point) const;
	bool	operator!=(Point const& point) const;
	unsigned int	getNum(void) const;
};

std::ostream&	operator<<(std::ostream& os, Point const& point);

#endif
