#include "Fixed.hpp"

const int Fixed::frac_bits = 8;//8로 초기화
//이게 기본생성자
Fixed::Fixed()// 시작시 -> 아래 글을 출력 하고 시작
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}
//이게 복사 생성자
Fixed::Fixed(const Fixed &ref)//
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}
//이게 소멸자
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
//이게 대입 연산자 오버로딩
Fixed& Fixed::operator=(const Fixed &ref) //
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = ref.getRawBits();
	return (*this);
}
//get
int	Fixed::getRawBits(void) const//get-> 정보를 가져옵니다.
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}
//set
void	Fixed::setRawBits(int const raw)//set-> 정보를 고쳐줍니다.(원하는 인자로 바꿀수 있습니다.)
{
	this->value = raw;
}
