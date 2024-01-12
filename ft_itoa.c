/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:11 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/11 14:23:18 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
int		intlen(int n);
char	*string_alloc(int n, int i);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == 0)
	{
		return ("0");
	}
	else if (!n)
	{
		return (NULL);
	}
	else if (n == -2147483648)
	{
		return ("-2147483648");
	}
	i = intlen(n);
	str = string_alloc(n, i);
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

char	*string_alloc(int n, int i)
{
	char	*nbr_str;

	if (n < 0)
	{
		i++;
		n = n * -1;
		nbr_str = malloc(i);
		*nbr_str = '-';
	}
	else
	{
		nbr_str = malloc(i);
	}
	*(nbr_str + i) = '\0';
	i--;
	while (n != 0)
	{
		*(nbr_str + i) = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (nbr_str);
}
