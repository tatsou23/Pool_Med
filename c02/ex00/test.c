#include "ft_strcpy.c"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	dest[50];

	if (ac == 2)
		printf("dest = %s\n", ft_strcpy(dest, av[1]));
	return (0);
}
