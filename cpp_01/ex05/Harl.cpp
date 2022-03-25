#include "Harl.hpp"

Harl::Harl()
<<<<<<< HEAD
{
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	complain_level[0] = &Harl::debug;
	complain_level[1] = &Harl::info;
	complain_level[2] = &Harl::warning;
	complain_level[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
=======
{
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}

Harl::~Harl()
{
<<<<<<< HEAD
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
=======
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}

void	Harl::debug(void)
{
<<<<<<< HEAD
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
=======
	std::cout << "말할거" << std::endl;
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}

void	Harl::info(void)
{
<<<<<<< HEAD
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
			(this->*complain_level[i])();
	}
}
=======
	std::cout <<"말할거" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "말할거" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "말할거" << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4 i++)
	{
		if (std::string str == 3)
			return(this->*complain(level))//여기 알아내기
	}
}
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
