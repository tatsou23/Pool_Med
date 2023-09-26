/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:32:44 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/26 22:32:55 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
