/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:11 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 15:24:30 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
int		intlen(int n);
char	*string_alloc(long int n, int i);

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nbr;

	nbr = n;
	if (!nbr)
	{
		return (NULL);
	}
	else if (n == 0)
	{
		str = malloc(2);
		*str = '0';
		*(str + 1) = '\0';
		return (str);
	}
	i = intlen(nbr);
	str = string_alloc(nbr, i);
	return (str);
}

int	intlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*string_alloc(long int n, int i)
{
	char	*nbr_str;

	if (n < 0)
	{
		i++;
		n = n * -1;
		nbr_str = malloc(i + 1);
		*nbr_str = '-';
	}
	else
	{
		nbr_str = malloc(i + 1);
	}
	*(nbr_str + i + 1) = '\0';
	i--;
	while (n != 0)
	{
		*(nbr_str + i) = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (nbr_str);
}
