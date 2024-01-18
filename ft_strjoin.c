/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:40 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 15:03:31 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_stringalloc(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	int		i;
	int		j;

	newstring = ft_stringalloc(s1, s2);
	if (newstring == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
	{
		*(newstring + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(newstring + i + j) = *(s2 + j);
		j++;
	}
	*(newstring + i + j) = '\0';
	return (newstring);
}

char	*ft_stringalloc(char const *s1, char const *s2)
{
	char	*newstring;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	newstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstring)
	{
		return (NULL);
	}
	return (newstring);
}
