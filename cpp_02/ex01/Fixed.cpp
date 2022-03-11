#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;
//이게 기본생성자
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& ref)//이렇게 해야 합니다.
{//이게 복사 생성자
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}
//
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	value = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << fractional_bits));
}
//이게 소멸자
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
//이게 대입 연산자 오버로당
Fixed& Fixed::operator=(const Fixed& ref) //
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = ref.getRawBits();
	return (*this);
}
//get-> 정보를 가져옵니다.
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}
//set-> get으로 가져온 정보를 원하는 인자로 바꿔줍니다.
void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
//Float 형으로 변경해주는 함수
float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << fractional_bits));
}
//int 형으로 변환해주는 함수
int	Fixed::toInt(void) const
{
	return (value >> 8);
}
