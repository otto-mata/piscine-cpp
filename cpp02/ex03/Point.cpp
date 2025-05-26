/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:20:19 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 05:36:04 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
  : _x(Fixed())
  , _y(Fixed())
{
}

Point::Point(float px, float py)
  : _x(px)
  , _y(py)
{
}

Point::~Point() {}

Point&
Point::operator=(const Point& other)
{
	(void)other;
  return *this;
}

const Fixed&
Point::x() const
{
  return (this->_x);
}

const Fixed&
Point::y() const
{
  return (this->_y);
}
