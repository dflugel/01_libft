/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:28 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/22 02:31:36 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
char	*ft_skip(char *s, char c, int i);
int		ft_count_word(char *s, char c);
char	**ft_free(char **result);
char	*ft_wordcut(char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	char	*cpy;

	i = 0;
	if (!s)
		return (0);
	result = ft_calloc(ft_count_word((char *) s, c) + 1, sizeof(char *));
	if (result == 0)
		return (0);
	if (ft_strlen(s) == 0)
		return (result);
	cpy = (char *)s;
	cpy = ft_skip(cpy, c, 1);
	while (*cpy != '\0')
	{
		*(result + i) = ft_wordcut(cpy, c);
		if (*(result + i) == 0)
			return (ft_free(result));
		cpy = ft_skip(cpy, c, 0);
		cpy = ft_skip(cpy, c, 1);
		i++;
	}
	return (result);
}

char	*ft_skip(char *s, char c, int i)
{
	while (*s != '\0' && *s == c && i == 1)
		s++;
	while (*s != '\0' && *s != c && i == 0)
		s++;
	return (s);
}

int	ft_count_word(char *s, char c)
{
	int	i;

	i = 0;
	s = ft_skip(s, c, 1);
	while (*s != '\0')
	{
		s = ft_skip(s, c, 0);
		s = ft_skip(s, c, 1);
		i++;
	}
	return (i);
}

char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(*(str + i));
		i++;
	}
	free(str);
	return (0);
}

char	*ft_wordcut(char *s, char c)
{
	int		i;
	char	*result;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	result = ft_calloc(i + 1, sizeof(char));
	if (result == 0)
		return (0);
	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
	{
		*(result + i) = *(s + i);
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
