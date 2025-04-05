/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.cpp                                            ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 11:22:55 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:14:06 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) 
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(const int &n)
{
	std::cout
		<< "Integer constructor called"
		<< std::endl;
	this->_rawBits = (n << this->_numberOfFractionalBits);
}

Fixed::Fixed(const float &f)
{
	std::cout
		<< "Floating point constructor called"
		<< std::endl;

	this->_rawBits = (int)(roundf(f * (1 << this->_numberOfFractionalBits)));
}


Fixed::Fixed(const Fixed &other)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	this->_rawBits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout
		<< "Copy assignment constructor called"
		<< std::endl;

	if (this != &other)
	{
		this->setRawBits(other.getRawBits());
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout
		<< "Destructor called"
		<< std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat() const
{	
	return ((float)this->_rawBits / (1 << this->_numberOfFractionalBits));
}

int Fixed::toInt() const
{
	return ((int)(this->_rawBits >> this->_numberOfFractionalBits));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}



Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->getRawBits() * other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->getRawBits() + other.getRawBits());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->getRawBits() - other.getRawBits());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->getRawBits() / other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed toto(*this);
	++(*this);
	return (toto);
}

Fixed &Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed toto(*this);
	--(*this);
	return (toto);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (b < a ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
