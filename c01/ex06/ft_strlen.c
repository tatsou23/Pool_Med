/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:48:18 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/27 03:02:54 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("Length of the string: %d\n", ft_strlen(av[1]));
	return (0);
}
