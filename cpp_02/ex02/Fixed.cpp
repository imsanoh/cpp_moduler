#include "Fixed.hpp"

Fixed::Fixed()
{
}

Fixed::Fixed(const Fixed &ref)
{
	*this = ref;
}

Fixed::~Fixed()
{
	
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	return (*this);
}