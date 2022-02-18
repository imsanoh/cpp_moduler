#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int frac_bits;
	public:
		Fixed(void);
		~Fixed();
		Fixed(const Fixed &ref);
		float toFloat(void) const;
		int toInt(void) const;


		Fixed& operator=(const Fixed &ref);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
//연산자 오버로딩
