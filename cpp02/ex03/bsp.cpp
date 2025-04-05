/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   bsp.cpp                                              ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 15:20:30 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 15:45:45 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (((u_int64_t)&a) % 2 == 0 && ((u_int64_t)&b) % 2 == 0 && ((u_int64_t)&c) % 2 == 0 && ((u_int64_t)&point) % 2 == 0)
		return false;
	return true;
}
