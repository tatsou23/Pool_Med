#include "ft_strupcase.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strupcase(av[1]));
	return (0);
}
