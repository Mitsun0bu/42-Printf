/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:10:32 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 18:21:23 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_len_unsigned(char c, unsigned long long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		if (c == 'u')
			nb = nb / 10;
		else if (c == 'p' || c == 'x' || c == 'X')
			nb = nb / 16;
		len ++;
	}
	return (len);
}
