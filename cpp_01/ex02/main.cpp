#include <iostream>
#include <string>

int main()
{
	//뭔가
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string	&ref = str;
	//포인터 스트링이랑 참조 스트링 만들기!

	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	std::cout << &str << std::endl;
	std::cout << str << std::endl;	

	//ptr 포인터 참조 일반
	//REf
}