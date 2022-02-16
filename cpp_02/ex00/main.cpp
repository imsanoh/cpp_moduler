#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b (a);
	Fixed c;

	c = b;

	std::cout << a.getRaWBits() << std::endl;
	std::cout << b.getRaWBits() << std::endl;
	std::cout << c.getRaWBits() << std::endl;

	return 0;
}