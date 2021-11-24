/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:40:27 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 09:04:15 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(unsigned long long nb, char *base)
{
	unsigned long long		size;

	size = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = nb * -1;
	}
	if (nb >= size)
	{
		ft_putnbr_base((nb / size), base);
		ft_putnbr_base((nb % size), base);
	}
	else
		ft_putchar_fd(base[nb], 1);
}
