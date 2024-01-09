/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:16 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/09 15:48:27 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*source_memory;
	unsigned char		*target_memory;

	target_memory = dest;
	source_memory = src;
	i = 0;
	if (dest < src)
	{
	while (i < n)
		{
			*(target_memory + i) = *(source_memory + i);
			i++;
		}
	}
	else
	{
	while (i < n)
		{
			*(target_memory + n) = *(source_memory + n);
			n++;
		}
	}
	return (dest);
}