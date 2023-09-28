/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:33:09 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 06:22:07 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printable(char c)
{
	if (c >= 32 && c != 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
