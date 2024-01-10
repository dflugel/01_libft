/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:28:55 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 18:47:41 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && n > 0)
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			break ;
		}
		i++;
		n--;
	}
	return (*(s1 + i) - *(s2 + i));
}
