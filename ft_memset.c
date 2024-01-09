/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:59:59 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/09 12:21:21 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*target_memory;
	unsigned char	value;

	target_memory = str;
	value = c;
	i = 0;
	while (i != n)
	{
		*target_memory = value;
		target_memory++;
		i++;
	}
	return (str);
}
