#include "Fixed.hpp"

Fixed::Fixed()
  : _rawBits(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
  std::cout << "Copy constructor called" << std::endl;
  this->_rawBits = other.getRawBits();
}

Fixed&
Fixed::operator=(const Fixed& other)
{
  std::cout << "Copy assignment constructor called" << std::endl;
  if (this != &other) {
    this->_rawBits = other.getRawBits();
  }
  return (*this);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int
Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_rawBits);
}

void
Fixed::setRawBits(const int raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  this->_rawBits = raw;
}
