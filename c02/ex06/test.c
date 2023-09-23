#include "ft_str_is_printable.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	int		i;
	char	str[20];

	strcpy(str, av[1]);
	i = 0;
	while (str[i])
	{
		str[i] -= 32;
		i++;
	}
	if (ac == 2)
		printf("%d\n", ft_str_is_printable(str));
	return (0);
}
