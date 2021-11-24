/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:16:02 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/20 11:23:41 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	va_list	copy;
	int		len;

	va_start(arg_ptr, format);
	va_copy(copy, arg_ptr);
	len = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			len ++;
		}
		else
		{
			ft_convert_arg(*(format + 1), arg_ptr);
			len = len + ft_arg_len(*(format + 1), copy);
			format ++;
		}
		format ++;
	}
	va_end(arg_ptr);
	return (len);
}
