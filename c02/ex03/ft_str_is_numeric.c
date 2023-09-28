/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:31:38 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 06:21:24 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}
