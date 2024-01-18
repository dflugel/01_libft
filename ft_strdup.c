/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:34 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 13:45:38 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	duplicate = malloc(ft_strlen(s) + 1);
	if (!duplicate)
	{
		return (NULL);
	}
	i = 0;
	while (*(s + i) != '\0')
	{
		*(duplicate + i) = *(s + i);
		i++;
	}
	*(duplicate + i) = '\0';
	return (duplicate);
}
