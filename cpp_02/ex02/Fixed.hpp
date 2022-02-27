#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int value;
		static const int fractional_bits;
	public:
		Fixed(void);
		~Fixed();
		Fixed(const Fixed &ref);

		Fixed& operator=(const Fixed &ref);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
};

#endif
//연산자 오버로딩
//int -> 


+ - * /
> < >= <= == != 
존나 작은수 