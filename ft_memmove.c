/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:16 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/22 01:18:35 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source_memory;
	char	*target_memory;

	if (!dest && !src)
		return (0);
	target_memory = (char *)dest;
	source_memory = (char *)src;
	i = 0;
	if (dest > src)
		while (n-- > 0)
			*(target_memory + n) = *(source_memory + n);
	else
	{
		while (i < n)
		{
			*(target_memory + i) = *(source_memory + i);
			i++;
		}
	}
	return (dest);
}
