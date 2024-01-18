/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:08 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 14:23:02 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	else if (ft_strlen(s) - start < len)
		substring = ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
	else
		substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (*(s + start + i) != '\0')
	{
		if (i == len)
			break ;
		*(substring + i) = *(s + start + i);
		i++;
	}
	*(substring + i) = '\0';
	return (substring);
}
