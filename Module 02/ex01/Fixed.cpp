#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& newone)

{
  out << newone.toFloat();
  return out;
}

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

Fixed::Fixed(const int integer)
{
	this->rawBits = integer * (1 << this->fractionalBits);
}

Fixed::Fixed(const float floating_number)
{
	this->rawBits = roundf((floating_number) * (1<< this->fractionalBits));
}

float Fixed::toFloat( void ) const
{
	float	float_num;

	float_num = (float)this->rawBits / (1 << this->fractionalBits);
	return float_num;
}

float Fixed::toInt( void ) const
{
	int	int_num;

	int_num = this->rawBits / (1 << this->fractionalBits);
	return int_num;
}
