#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	
	(void) argc;
	if (!argv[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
