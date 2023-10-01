/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:33:37 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/10/01 14:39:37 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end;
	int	tmp;

	end = tab + size - 1;
	while (*tab < *end)
	{
		tmp = *tab;
		*tab = *end;
		*end = tmp;
		tab++;
		end--;
	}
}
