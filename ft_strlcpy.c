/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:23 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 13:17:35 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		lenght;

	i = 0;
	lenght = ft_strlen(src);
	while (*(src + i) != '\0')
	{
		if (i == size)
		{
			*(dst + i) = '\0';
			return (i);
		}
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (lenght);
}
