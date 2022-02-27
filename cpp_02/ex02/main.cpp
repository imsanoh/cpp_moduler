#include <iostream>
<<<<<<< HEAD
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl; // 개념보자
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout MM Fixed::max(a,b) << std::endl;

	return 0;
}
=======

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
