/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:28:08 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/14 22:06:30 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void) {
		char x;
		x = 'z';	
		while (x >= 'a') {

		write( 1, &x, 1);
		x--;
	}
	write(1, "\n", 1);
}

int main() {
	ft_print_alphabet();
	return 0;
}
