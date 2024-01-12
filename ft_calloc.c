/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:01 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 18:43:18 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	int		n;
	char	*place;

	if (!nmemb || !size || nmemb * size > 2147483647)
	{
		return (NULL);
	}
	i = 0;
	n = nmemb * size;
	place = malloc(n);
	while (i < (n))
	{
		*(place + i) = '\0';
		i++;
	}
	return (place);
}
