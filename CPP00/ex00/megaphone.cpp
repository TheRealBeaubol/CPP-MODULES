#include <iostream>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac > 1)
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)toupper(av[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
} 	