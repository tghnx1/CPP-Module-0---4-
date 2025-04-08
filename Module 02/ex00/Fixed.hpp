#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
  private:
    int rawBits;
    static const int fractionalBits = 8;
  public:
    Fixed();
    Fixed(const Fixed&);
    Fixed &operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};