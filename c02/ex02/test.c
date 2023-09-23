#include "ft_str_is_alpha.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_alpha(av[1]));
	return (0);
}
