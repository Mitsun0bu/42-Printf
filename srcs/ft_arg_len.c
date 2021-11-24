/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:08:52 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/20 14:02:51 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_arg_len(char c, va_list copy)
{
	char	*s;

	if (c == '%')
		return (1);
	else if (c == 'c')
		va_arg(copy, int);
	else if (c == 's')
	{
		s = va_arg(copy, char *);
		if (!s)
			return (6);
		else
			return (ft_strlen(s));
	}
	else if (c == 'd' || c == 'i')
		return (ft_len_signed(c, va_arg(copy, int)));
	else if (c == 'u')
		return (ft_len_unsigned(c, va_arg(copy, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_len_unsigned(c, va_arg(copy, unsigned int)));
	else if (c == 'p')
		return (ft_len_unsigned(c, va_arg(copy, unsigned long long)) + 2);
	return (1);
}
