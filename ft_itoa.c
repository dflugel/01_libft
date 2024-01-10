/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:11 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/10 23:10:35 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_itoa(int n);
int		intlen(int n);
char	*string_alloc(int n, int i);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (!n)
	{
		return (NULL);
	}
	if (n == 0)
	{
		printf("-2147483648");
		return ("-2147483648");
	}
	if (n == 0)
	{
		printf("1");
		return ("0");
	}
	i = intlen(n);
	str = string_alloc(n, i);
	return (str);
}



int	intlen(int n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	printf("Länge: %i\n", i);
	return (i);
}

char	*string_alloc(int n, int i)
{
	char	*nbr_str;
printf("Länge später: %i\n", i);
	if (n < 0)
	{
		i++;
		n = n * -1;
		nbr_str = malloc(i);
		*nbr_str = '-';
		printf("HALLO!; %i\n", n);
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
		printf("3, %s, %i\n", nbr_str + i, n);
		i--;
	}
	return (nbr_str);
}