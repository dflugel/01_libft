/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/16 18:30:08 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);
//size_t	ft_catlen(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(dst + i) && i < size)
		i++;
	while (*(src + j) && i + j + 1 < size)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (size != 0 && i < size)
		*(dst + i + j) = '\0';
	while (*(src + j))
		j++;
	return (i + j);
}
