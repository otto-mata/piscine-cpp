/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.cpp                                            ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 15:20:19 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:14:13 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed()) {}

Point::Point(float px, float py)
{
	this->x(Fixed(px));
	this->y(Fixed(py));
}

Point::~Point() {}

Point &Point::operator=(const Point &other)
{
	this->x(other.x());
}

const Fixed &Point::x() const
{
	return (this->_x);
}

void Point::x(const Fixed &newX)
{
}

const Fixed &Point::y() const
{
	return (this->_y);
}


void Point::y(const Fixed &newY)
{
	this->y(newY);
}
