/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:42:55 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/09/28 12:00:55 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*src != '\0' && nb > 0)
	{
		*tmp = *src;
		src++;
		tmp++;
		nb--;
	}
	*tmp = '\0';
	return (dest);
}
