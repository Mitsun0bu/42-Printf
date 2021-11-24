/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_signed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:09:38 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 09:12:38 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_len_signed(char c, long long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len ++;
	}
	if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		if (c == 'd' || c == 'i' || c == 'u')
			nb = nb / 10;
		else if (c == 'p' || c == 'x' || c == 'X')
			nb = nb / 16;
		len ++;
	}
	return (len);
}
