/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:31 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 13:48:06 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	if (c < 0)
	{
		return ((char *)s);
	}
	while (*(s) != '\0')
	{
		if (*(s) == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(s) == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
