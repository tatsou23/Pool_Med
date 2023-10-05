/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 07:57:19 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/10/04 11:47:36 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*src != '\0')
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	*tmp = '\0';
	return (dest);
}
