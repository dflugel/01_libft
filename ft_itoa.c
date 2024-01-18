/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:11 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 15:56:26 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
int		intlen(int n);
char	*string_alloc(long int n, int i);
char	calc_digit(long int n, int i);

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nbr;

	nbr = n;
	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		*str = '0';
		*(str + 1) = '\0';
		return (str);
	}
	else if (!nbr)
	{
		return (NULL);
	}
	i = intlen(nbr);
	str = string_alloc(nbr, i);
	if (!str)
		return (NULL);
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
	int		j;

	j = 0;
	if (n < 0)
	{
		n = n * -1;
		nbr_str = malloc(i + 2);
		if (!nbr_str)
			return (NULL);
		*nbr_str = '-';
		j++;
	}
	else
		nbr_str = malloc(i + 1);
	if (!nbr_str)
		return (NULL);
	while (i > 0)
	{
		*(nbr_str + j) = calc_digit(n, i);
		i--;
		j++;
	}
	*(nbr_str + j) = '\0';
	return (nbr_str);
}

char	calc_digit(long int n, int i)
{
	char	digit;

	while (i > 1)
	{
		n = n / 10;
		i --;
	}
	digit = n % 10 + 48;
	return (digit);
}
