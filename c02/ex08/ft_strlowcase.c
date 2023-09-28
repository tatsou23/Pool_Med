/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 06:22:53 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 06:22:58 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_charlowcase(str[i]);
		i++;
	}
	return (str);
}
