 #include "Fixed.hpp"

// constructors:

Fixed::Fixed(void)
{
  std::cout <<"Default constructor called" << std::endl;
  this->rawBits = 0;
}

Fixed::Fixed(const int integer)
{
  this->rawBits = integer * (1 << this->fractionalBits);
}

Fixed::Fixed(const float floating_number)
{
  this->rawBits = roundf((floating_number) * (1<< this->fractionalBits));
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

// getters, setters

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

// operators:

std::ostream& operator<<(std::ostream& out, const Fixed& newone)

{
  out << newone.toFloat();
  return out;
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

bool  Fixed::operator>(const Fixed& newone) const
{
  return (this->rawBits > newone.rawBits);
}

bool  Fixed::operator<(const Fixed& newone) const
{
  return (this->rawBits < newone.rawBits);
}

bool  Fixed::operator>=(const Fixed& newone) const
{
  return (this->rawBits >= newone.rawBits);
}

bool  Fixed::operator<=(const Fixed& newone) const
{
  return (this->rawBits <= newone.rawBits);
}

bool  Fixed::operator==(const Fixed& newone) const
{
  return (this->rawBits == newone.rawBits);
}

bool  Fixed::operator!=(const Fixed& newone) const
{
  return (this->rawBits != newone.rawBits);
}

Fixed  Fixed::operator+(const Fixed& newone) const
{
  Fixed result;

  result.setRawBits(this->rawBits + newone.rawBits);
  return (result);
}

Fixed  Fixed::operator-(const Fixed& newone) const
{
  Fixed result;

  result.setRawBits(this->rawBits - newone.rawBits);
  return (result);
}

Fixed  Fixed::operator*(const Fixed& newone) const
{
  Fixed result;

  result.setRawBits(this->rawBits * newone.rawBits >> this->fractionalBits);
  return (result);
}

Fixed  Fixed::operator / (const Fixed& newone) const
{
  Fixed result;

  result.setRawBits(((1 << this->fractionalBits) * this->rawBits / newone.rawBits));
  return (result);
}

Fixed&  Fixed::operator ++ ()
{
  ++this->rawBits;
  return (*this);
}

Fixed&  Fixed::operator -- ()
{
  --this->rawBits;
  return (*this);
}

Fixed Fixed::operator ++ (int)
{
  Fixed newone(*this);
  this->rawBits++;
  return (newone);
}

Fixed Fixed::operator -- (int)
{
  Fixed newone(*this);
  this->rawBits--;
  return (newone);
}
//actions:

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
  if (a < b)
    return (a);
  return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
  if (a < b)
    return (a);
  return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a < b)
    return (a);
  return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a > b)
    return (a);
  return (b);
}

float Fixed::toFloat( void ) const
{
	float	float_num;

	float_num = (float)this->rawBits / (1 << this->fractionalBits);
	return float_num;
}

int Fixed::toInt( void ) const
{
	int	int_num;

	int_num = this->rawBits / (1 << this->fractionalBits);
	return int_num;
}
