#include <iostream>
#include "sample.hpp"

Sample::Sample(void)
{
	std::cout << "Constrution called" << std::endl;
	return ;
}
Sample::~Sample(void)
{
	std::cout << "Destruction called" << std::endl;
	return ;
}

void Sample::bar(char const c) const
{
	std::cout << "member function bar called with char overload : " << c << std::endl;
	return ;
}

void Sample::bar(int const n) const
{
	std::cout << "member function bar called with int overload : " << n << std::endl;
	return ;
}

void Sample::bar(float const z) const
{
	std::cout << "member function bar called with char overload : " << z << std::endl;
	return ;
}

void Sample::bar(Sample const & i) const
{
	(void) i;
	std::cout << "member function bar called with char overload : " << std::endl;
	return ;
}