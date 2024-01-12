/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:58 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 18:04:41 by dflugel          ###   ########.fr       */
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
	while (*(big + i) != '\0')
	{
		if (i == len || !little)
		{
			return (NULL);
		}
		while (*(big + i + j) == *(little + j))
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
