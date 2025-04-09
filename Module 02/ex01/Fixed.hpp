#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
  private:
    size_t rawBits;
    static const int fractionalBits = 8;
  public:
    Fixed();
    Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
    Fixed& operator = (const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat( void ) const;
	float toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& newone);
