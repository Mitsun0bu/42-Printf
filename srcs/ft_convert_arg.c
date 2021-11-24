/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:07:37 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/20 14:27:22 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_convert_arg(char c, va_list arg_ptr)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else if (c == 's')
		ft_putstr_printf_fd(va_arg(arg_ptr, char *), 1);
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base(va_arg(arg_ptr, unsigned long long), "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(arg_ptr, int), 1);
	else if (c == 'u')
		ft_putnbr_unsigned_fd(va_arg(arg_ptr, unsigned int), 1);
	else if (c == 'x')
		ft_putnbr_base(va_arg(arg_ptr, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(arg_ptr, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar_fd('%', 1);
}
