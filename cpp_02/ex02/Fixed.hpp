<<<<<<< HEAD
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
=======
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		/* data */
	public:
		Fixed(/* args*/);
		Fixed(const Fixed &ref);
		~Fixed();
		Fixed& operator=(const Fixed &ref);
};

#endif
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
