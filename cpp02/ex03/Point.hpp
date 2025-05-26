/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:20:38 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 05:18:38 by tblochet         ###   ########.fr       */
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
  Point();
  Point(float x, float y);
  ~Point();
  Point& operator=(const Point& other);
  const Fixed& x() const;
  const Fixed& y() const;
};

bool
bsp(Point const a, Point const b, Point const c, Point const point);


#endif
