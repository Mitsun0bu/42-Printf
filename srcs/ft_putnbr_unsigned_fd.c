/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:31:06 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 09:04:06 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	if (nb > 9)
		ft_putnbr_unsigned_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
