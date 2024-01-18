/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:00 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 12:46:42 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*searchstring;

	i = 0;
	searchstring = s;
	while (i < n)
	{
		if ((unsigned char)*(searchstring + i) == (unsigned char)c)
		{
			return ((void *)searchstring + i);
		}
		i++;
	}
	return (NULL);
}
