#include <iostream>
#include <string>

/*int	main()
{
	int	number0fVBalls = 42;

	int* ballsPtr = &number0fVBalls;
	int& ballsRef = number0fVBalls;

	std::cout << number0fVBalls << " "<< *ballsPtr << " " <<ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << number0fVBalls << std:: endl;
	ballsRef = 84;
	std::cout << number0fVBalls << std::endl;

	return (0);
}
*/

void	byPtr(std::string *str)
{
	*str += "and ponies";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += "and ponies";
}

void	byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int		main()
{
	std::string str = "I like butterflies ";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters ";\

	std::cout << str <<std::endl;
	byRef(str);
	byConstRef(str);

	return 0;
}