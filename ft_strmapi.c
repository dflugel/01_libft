/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:52 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/11 17:24:14 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	i = 0;
	result = malloc(len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		*(result + i) = f((unsigned int)i, *(s + i));
		i++;
	}
	*(result + len) = '\0';
	return (result);
}
