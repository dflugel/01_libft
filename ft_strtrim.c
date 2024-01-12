/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:05 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 20:56:01 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_trimlen(char const *srcstr, char const *trimset);
char	*ft_strrev(char const *srcstr);
char	*ft_strtrim(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*new_str;
	int		str_start;
	int		str_end;
	int		i;

	if (!s1)
	{
		return (0);
	}
	i = 0;
	str_start = ft_trimlen(s1, s2);
	str_end = ft_strlen(s1) - ft_trimlen(ft_strrev(s1), s2);
	new_str = malloc(str_end - str_start);
	while (*(s1 + str_start) != '\0' && str_start <= str_end)
	{
		*(new_str + i) = *(s1 + str_start);
		str_start++;
		i++;
	}
	*(new_str + str_start) = '\0';
	return (new_str);
}

char	*ft_strrev(char const *srcstr)
{
	char	*reversed;
	int		i;
	int		j;

	i = ft_strlen(srcstr);
	j = 0;
	reversed = malloc(i);
	while (i > 0)
	{
		*(reversed + j) = *(srcstr + i - 1);
		j++;
		i--;
	}
	*(reversed + j) = '\0';
	return (reversed);
}

int	ft_trimlen(char const *srcstr, char const *trimset)
{
	int	i;
	int	j;
	int	stoptrigger;

	i = 0;
	stoptrigger = 1;
	while (*(srcstr + i) != '\0' && stoptrigger == 1)
	{
		stoptrigger = 0;
		j = 0;
		while (*(trimset + j) != '\0')
		{
			if (*(trimset + j) == *(srcstr + i))
			{
				stoptrigger = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	i--;
	return (i);
}
