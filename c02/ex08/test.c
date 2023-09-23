#include "ft_strlowcase.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strlowcase(av[1]));
	return (0);
}
