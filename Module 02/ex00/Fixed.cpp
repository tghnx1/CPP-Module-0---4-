#include "Fixed.hpp"

Fixed::Fixed(void)
{
  std::cout <<"Default constructor called" << std::endl;
  this->rawBits = 0;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  this->rawBits = raw;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& newone)
{
  std::cout << "Copy constructor called" << std::endl;
  this->rawBits = newone.rawBits;
}

Fixed &Fixed::operator=(const Fixed& newone)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &newone)
  {
    this->rawBits = newone.rawBits;
  }
  return (*this);
}