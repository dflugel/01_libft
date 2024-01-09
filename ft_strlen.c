/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:55:14 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/09 15:11:39 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *s);

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
