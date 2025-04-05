/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.hpp                                            ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 15:20:38 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 15:42:08 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	/* ctor */	Point();
	/* ctor */	Point(float x, float y);
	/* dtor */	~Point();
	Point		&operator=(const Point &other);
	const Fixed	&x() const;
	void		x(const Fixed &newX);
	const Fixed	&y() const;
	void		y(const Fixed &newY);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
