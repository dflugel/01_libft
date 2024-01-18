/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:05 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 16:55:05 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_trimfront(char const *srcstr, char const *trimset);
int		ft_trimback(char const *srcstr, char const *trimset);
char	*ft_strtrim(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*new_str;
	int		str_start;
	int		str_end;
	int		i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	str_start = ft_trimfront(s1, s2);
	if (*(s1 + str_start) == '\0')
	{
		new_str = malloc(1);
		*(new_str) = '\0';
		return (new_str);
	}
	str_end = ft_trimback(s1, s2);
	new_str = malloc(str_end - str_start + 1);
	while (*(s1 + str_start) != '\0' && str_start <= str_end)
	{
		*(new_str + i) = *(s1 + str_start);
		str_start++;
		i++;
	}
	return (new_str);
}

int	ft_trimfront(char const *srcstr, char const *trimset)
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

int	ft_trimback(char const *srcstr, char const *trimset)
{
	int	i;
	int	j;
	int	stoptrigger;

	i = ft_strlen(srcstr);
	stoptrigger = 1;
	while (i > 0 && stoptrigger == 1)
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
		i--;
	}
	i++;
	return (i);
}
