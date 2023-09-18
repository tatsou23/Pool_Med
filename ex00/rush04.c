/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del--bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:33 by del--bou          #+#    #+#             */
/*   Updated: 2023/09/17 19:44:08 by kbenjel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_draw(int len, char fline, char midline, char endline)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0)
		{
			ft_putchar(fline);
		}
		else
		{
			if (i == len - 1)
			{
				ft_putchar(endline);
			}
			else
			{
				ft_putchar(midline);
			}
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	a;

	a = 0;
	while (a < y)
	{
		if (a == 0)
			ft_draw(x, 'A', 'B', 'C');
		else if (a == y - 1)
			ft_draw(x, 'C', 'B', 'A');
		else
			ft_draw(x, 'B', ' ', 'B');
		a++;
	}
}
