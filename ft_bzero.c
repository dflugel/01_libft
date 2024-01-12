/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:04 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/09 12:22:40 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n);

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*target_memory;

	target_memory = s;
	i = 0;
	while (i != n)
	{
		*target_memory = '\0';
		target_memory++;
		i++;
	}
	return (s);
}
