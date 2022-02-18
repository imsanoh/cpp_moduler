#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int frac_bits;
	public:
		Fixed(/* args*/);
		Fixed(const Fixed &ref);
		~Fixed();

		Fixed& operator=(const Fixed &ref);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif