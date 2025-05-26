/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:20:22 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 05:40:14 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
int
main(void)
{
  Point A = Point(0.0, 0.0);
  Point B = Point(3.0, 0.0);
  Point C = Point(0.0, 1.5);
  Point P = Point(1.0, 1.0);
  std::cout << "Point P [" << P.x() << ", " << P.y()
            << "] is in triangle ABC: " << (bsp(A, B, C, P)
    ? std::string("Yes")
    : std::string("No")) << std::endl;
}
