/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:32:14 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/26 22:32:26 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
