/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhaldi <mokhaldi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:32:59 by mokhaldi          #+#    #+#             */
/*   Updated: 2023/10/04 11:49:53 by mokhaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = str;
	ptr2 = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		ptr1 = str;
		ptr2 = to_find;
		while (*ptr2 != '\0' && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (str);
		str++;
	}
	return (0);
}
