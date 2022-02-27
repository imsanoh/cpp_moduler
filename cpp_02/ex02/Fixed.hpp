#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int value;
	static const int fractional_bits;
public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed &ref);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

#endif
