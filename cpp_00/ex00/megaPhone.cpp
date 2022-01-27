#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	
	(void) argc;
	if (!argv[1])
		std::cout << "암것도 안들어옴";
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
