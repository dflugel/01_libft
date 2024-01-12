/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:00 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 17:37:44 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*searchstring;

	i = 0;
	ch = (unsigned char) c;
	searchstring = (unsigned char *) s;
	while (*(searchstring + i) != '\0' && i <= n)
	{
		if (*(searchstring + i) == ch)
		{
			return (searchstring + i);
		}
		i++;
	}
	return (NULL);
}
