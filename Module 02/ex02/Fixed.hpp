#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
  private:
    size_t rawBits;
    static const int fractionalBits = 8;
  public:
    //co(de)structors:
    Fixed();
    Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	~Fixed();
    //operators:
    Fixed& operator = (const Fixed&);
	bool operator > (const Fixed&) const;
	bool operator < (const Fixed&) const;
	bool operator >= (const Fixed&) const;
	bool operator <= (const Fixed&) const;
	bool operator == (const Fixed&) const;
	bool operator != (const Fixed&) const;
	Fixed operator + (const Fixed&) const;
	Fixed operator - (const Fixed&) const;
	Fixed operator * (const Fixed&) const;
	Fixed operator / (const Fixed&) const;
	Fixed& operator ++ ();
    Fixed& operator -- ();
    Fixed operator ++ (int);
	Fixed operator -- (int);

    //action:
    int getRawBits(void) const;
    void setRawBits(int const);
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed& min(Fixed&, Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream& out, const Fixed& newone);
