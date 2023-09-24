/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:19:17 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/24 03:12:24 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(void)
{
	ft_putnbr(4565);
	return (0);
}
