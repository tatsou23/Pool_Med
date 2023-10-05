#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	i;
	int				j;

	i = 4;
	char s[] = "h";
	char d[] = "h";
	j = ft_strncmp(s, d, i);
	printf("%i", ft_strncmp(s, d, i));
	return (0);
}
