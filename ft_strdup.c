/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:34 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 18:49:01 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	if (!s)
	{
		return (NULL);
	}
	duplicate = malloc(ft_strlen(s));
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
