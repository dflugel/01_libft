/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madwingg <madwingg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:26:43 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/18 13:11:58 by madwingg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	nbr_sign;

	nbr = 0;
	nbr_sign = 1;
	if (*nptr == '-')
	{
		nbr_sign = -1;
		nptr++;
	}
	while (*nptr != '\0')
	{
		if (*nptr < 48 || *nptr > 57)
		{
			return (0);
		}
		else if ((nbr * nbr_sign) == -214748364 && *nptr == '8')
		{
			return (-2147483648);
		}
		nbr = nbr * 10 + (*nptr - 48);
		nptr++;
	}
	return (nbr * nbr_sign);
}
