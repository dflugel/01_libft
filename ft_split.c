/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/19 15:05:01 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_strings(char const *s, char c);
int		calc_str_start(char *str, char del, int last_end);
int		calc_str_end(char *str, char del, int str_start);
char	*str_alloc(char const *src_str, char del, int nr_str);
char	**ft_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		n_str;
	int		str_start;
	int		str_end;
	char	*buffer;
	char	**result;

	if (s == NULL)
	{
		return (NULL);
	}
	buffer = ft_strtrim(s, &c);
	n_str = count_strings(buffer, c);
	result = malloc((n_str + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	str_start = 0;
	while (n_str > 0)
	{
		*(result + i) = str_alloc(s, c, i);
		i++;
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

int	calc_str_start(char *str, char del, int last_end)
{
	int	str_start;

	str_start = last_end;
	while (*(str + str_start) == del)
	{
		str_start++;
	}
	return (str_start);
}

int	calc_str_end(char *str, char del, int str_start)
{
	int	str_end;

	str_end = str_start;
	while (*(str + str_end + 1) != del && *(str + str_end + 1) != '\0')
	{
		str_end++;
	}
	return (str_end);
}

char	*str_alloc(char const *src_str, char del, int nr_str)
{
	size_t	i;
	char	*buffer;
	char	*result;

	buffer = malloc((ft_strlen(src_str) + 1) * sizeof(char));
	src_str += cut_front(src_str, del, nr_str);
	i = 0;
	while (*(src_str + i) != del && *(src_str + i) != '\0')
	{
		*(buffer + i) = *(src_str + i);
		i++;
	}
	*(buffer + i) = '\0';
	result = malloc((ft_strlen(buffer) + 1));
	i = 0;
	while (i < ft_strlen(buffer))
	{
		*(result + i) = *(buffer + i);
		i++;
	}
	*(result + i) = '\0';
	free(buffer);
	return (result);
}
