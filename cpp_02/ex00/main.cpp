//과제 요구조건->c++에서 지원하는 부동 소수점을 지원하지 않는 고정 소수점으로 변환하는데 필요한 기능을 대략적이나마 살펴보고, 
//이를 규칙으로 지정하여 익숙하게 하기 위한 과제라고 생각한다.

#include "Fixed.hpp"

int main(void)
{
	Fixed a;//객체에 생성하는 애들을 인스턴스라고 함
	Fixed b (a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
//과제에서 요구 하는 사항이 변경되었음
//과제에서 요구하는 규칙은 다음과 같다.
// 1.기본 생성자
// 2.복사 생성자
// 3.대입 연산자 오버로딩
// 4.소멸자
