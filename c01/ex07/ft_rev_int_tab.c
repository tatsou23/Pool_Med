/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:33:37 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 06:17:17 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end;
	int	tmp;

	end = tab + size - 1;
	while (*tab)
	{
		tmp = *tab;
		*tab = *end;
		*end = tmp;
		tab++;
		end--;
	}
}
