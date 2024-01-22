/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:08 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/22 01:59:15 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_final;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup (""));
	len_final = len;
	if (ft_strlen(s) - start <= len)
		len_final = ft_strlen(s) - start;
	substring = malloc (len_final + 1);
	if (!substring)
		return (NULL);
	ft_memcpy (substring, s + start, len_final + 1);
	*(substring + len_final) = '\0';
	return (substring);
}
