/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:44:31 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/16 18:23:30 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb() {
	int a, b, c;
	a = '0';
	b = a;
	c = b;

	while(c <= '9'){
	
		while(b < '8'){

			while(a < '7'){
				write(1, &a, 1);
				a++;
	}
		write(1, &b, 1);
		b++;
	}
	write(1, &c, 1);
		c++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
