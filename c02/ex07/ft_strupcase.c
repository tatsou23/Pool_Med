/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:35:15 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/26 22:36:13 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_charupcase(str[i]);
		i++;
	}
	return (str);
}
