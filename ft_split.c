/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/19 17:47:20 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_strings(char const *s, char c);
int		calc_str_start(char const *str, char del, int last_end);
int		calc_str_end(char const *str, char del, int str_start);
char	*str_alloc(char const *src_str, char del, int nr_str);
char	**ft_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		n_str;
	int		str_start;
	int		str_end;
	int		i;
	char	**result;

	if (s == NULL)
		return (NULL);
	n_str = count_strings(s, c);
	result = malloc((n_str + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	str_end = 0;
	i = 0;
	while (i < n_str)
	{
		str_start = calc_str_start(s, c, str_end);
		str_end = calc_str_end(s, c, str_start);
		*(result + i) = ft_substr(s, str_start, (str_end - str_start) + 1);
		i++;
		str_end++;
	}
	*(result + i) = NULL;
	return (result);
}

int	count_strings(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
		while (*s == c)
			s++;
	}
	return (i);
}

int	calc_str_start(char const *str, char del, int last_end)
{
	int	str_start;

	str_start = last_end;
	while (*(str + str_start) == del)
	{
		str_start++;
	}
	return (str_start);
}

int	calc_str_end(char const *str, char del, int str_start)
{
	int	str_end;

	str_end = str_start;
	while (*(str + str_end + 1) != del && *(str + str_end + 1) != '\0')
	{
		str_end++;
	}
	return (str_end);
}
