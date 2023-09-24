#include "ft_strncpy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	dest[50];

	if (ac == 3)
	{
		printf("FT - dest = %s\n", ft_strncpy(dest, av[1], atoi(av[2])));
		printf("RL - dest = %s\n", strncpy(dest, av[1], atoi(av[2])));
	}
	return (0);
}
