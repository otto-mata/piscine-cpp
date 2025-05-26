/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:20:30 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 05:39:26 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float
perpendicularDotProductFromPoints(Point const a, Point const b, Point const c)
{
  return (b.x().toFloat() - a.x().toFloat()) *
           (c.y().toFloat() - a.y().toFloat()) -
         (b.y().toFloat() - a.y().toFloat()) *
           (c.x().toFloat() - a.x().toFloat());
}

bool
bsp(Point const a, Point const b, Point const c, Point const point)
{
  float dEdgeAB = perpendicularDotProductFromPoints(a, b, point);
  float dEdgeBC = perpendicularDotProductFromPoints(b, c, point);
  float dEdgeCA = perpendicularDotProductFromPoints(c, a, point);
  return (dEdgeAB > 0) && (dEdgeBC > 0) && (dEdgeCA > 0);
}
