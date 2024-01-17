/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:55 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/17 21:50:26 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*(s1 + i) == *(s2 + i) && i < n)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			break ;
		}
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
