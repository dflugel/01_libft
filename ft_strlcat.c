/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 13:12:30 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size);

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*(dst + i) != '\0')
	{
		if (i == size)
		{
			*(dst + i) = '\0';
			return (i);
		}
		*(dst + i) = *(src + i);
		i++;
	}
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
	return (i);
}
