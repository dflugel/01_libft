/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:05 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/19 13:49:04 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_detect_trim(char const *srcstr, char const *trimset);
char	*ft_strtrim(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*new_str;
	int		str_start;
	int		str_end;

	if (!s1 || !s2)
		return (0);
	str_start = 0;
	str_end = ft_strlen(s1) - 1;
	while (ft_detect_trim((s1 + str_start), s2) == 1)
		str_start++;
	while (ft_detect_trim((s1 + str_end), s2) == 1)
		str_end--;
	if (str_end < str_start)
		return ("\0");
	new_str = ft_substr(s1, str_start, (str_end - str_start + 1));
	return (new_str);
}

int	ft_detect_trim(char const *srcstr, char const *trimset)
{
	int	i;

	i = 0;
	while (*(trimset + i) != '\0')
	{
		if (*(trimset + i) == *srcstr)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
