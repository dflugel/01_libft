/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:00:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 15:13:15 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_catlen(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_catlen(dst, src, size);
	while (*(dst + i) != '\0' && i < size)
	{
		i++;
	}
	while (*src != '\0' && i < size)
	{
		*(dst + i) = *src;
		src++;
		i++;
	}
	*(dst + i) = '\0';
	return (length);
}

size_t	ft_catlen(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = 0;
	while (*dst != '\0' && length < size)
	{
		dst++;
		length++;
	}
	while (*src != '\0' && length < size)
	{
		src++;
		length++;
	}
	return(length);
}
