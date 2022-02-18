#include "Fixed.hpp"

int main(void)
{
	Fixed a;//객체에 생성하는 애들을 인스턴스라고 함
	Fixed b (a);
	Fixed c;

	c = b;

	std::cout << a.getRaWBits() << std::endl;
	std::cout << b.getRaWBits() << std::endl;
	std::cout << c.getRaWBits() << std::endl;

	return 0;
}
