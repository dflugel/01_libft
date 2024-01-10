/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:31 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 16:32:04 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	while (*(s) != '\0')
	{
		if (*(s) == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(s) == c)
	{
		return ((char *)s);
	}
	return (NULL);
}
