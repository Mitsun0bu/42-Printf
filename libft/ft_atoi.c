/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:05:03 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 16:28:22 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == 32)
		return (1);
	return (0);
}

static int	ft_checkoverflow(long int nbr, long int sign)
{
	if (nbr > 2147483648 || nbr < -2147483649)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return ((int)nbr * sign);
}

int	ft_atoi(const char *str)
{
	long int	nbr;
	int			i;
	long int	sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i ++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	return (ft_checkoverflow(nbr, sign));
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	*number;

	number = "2147483650";
	printf("number as a string :	%s\n", number);
	printf("number after atoi :	%d\n", atoi(number));
	printf("number after ft_atoi :	%d\n", ft_atoi(number));
	return (0);
}

// === END OF MY TEST ===
*/
