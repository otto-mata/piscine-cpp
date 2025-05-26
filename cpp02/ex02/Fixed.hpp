/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:22:55 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:54:22 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed
{
private:
  static const int _numberOfFractionalBits = 8;
  int _rawBits;

public:
  Fixed();
  Fixed(const int& n);
  Fixed(const float& f);
  Fixed(const Fixed& other);
  Fixed& operator=(const Fixed& other);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(const int raw);
  float toFloat() const;
  int toInt() const;

  Fixed operator*(const Fixed& other) const;
  Fixed operator+(const Fixed& other) const;
  Fixed operator-(const Fixed& other) const;
  Fixed operator/(const Fixed& other) const;

  bool operator==(const Fixed& other) const;
  bool operator!=(const Fixed& other) const;
  bool operator>(const Fixed& other) const;
  bool operator<(const Fixed& other) const;
  bool operator<=(const Fixed& other) const;
  bool operator>=(const Fixed& other) const;

  Fixed& operator++();
  Fixed operator++(int);
  Fixed& operator--();
  Fixed operator--(int);

  static Fixed& min(Fixed& a, Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
  static const Fixed& min(const Fixed& a, const Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream&
operator<<(std::ostream& stream, const Fixed& fixed);

#endif
