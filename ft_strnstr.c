/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:58 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 13:10:18 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big)
		return (0);
	if (*little == '\0' || little == 0)
		return ((char *) big);
	while (*(big + i) != '\0' && i < len)
	{
		while (*(big + i + j) == *(little + j) && i + j < len)
		{
			j++;
			if (*(little + j) == '\0')
			{
				return ((char *) big + i);
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
