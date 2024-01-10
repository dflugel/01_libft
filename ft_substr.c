/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:08 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 20:08:34 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
	{
		return (0);
	}
	substring = malloc(len);
	while (*(s + start + i) != '\0')
	{
		if (i == len)
		{
			break ;
		}
		*(substring + i) = *(s + start + i);
		i++;
	}
	*(substring + i) = '\0';
	return (substring);
}
