/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 06:23:14 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 10:47:04 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_downcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalphanumeric(char c)
{
	if (ft_numeric(c) || ft_downcase(c) || ft_upcase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i == 0 || !ft_isalphanumeric(str[i - 1])) && ft_downcase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
