#include "Karen.hpp"

Karen::Karen()
{
<<<<<<< HEAD
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	complain_level[0] = &Karen::debug;
	complain_level[1] = &Karen::info;
	complain_level[2] = &Karen::warning;
	complain_level[3] = &Karen::error;
=======
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}

Karen::~Karen()
{
}

<<<<<<< HEAD
void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
=======
void	Karen::debug(void)
{
	std::cout << "말할거" << std::endl;
}

void	Karen::info(void)
{
	std::cout <<"말할거" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "말할거" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "말할거" << std::endl;
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}

void	Karen::complain(std::string level)
{
<<<<<<< HEAD
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
			(this->*complain_level[i])();
	}
}
=======
	for (int i = 0; i < 4 i++)
	{
		if (std::string str == 3)
			return(this->*complain(level))//여기 알아내기
	}
}
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
