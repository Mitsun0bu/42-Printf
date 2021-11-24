/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:30:47 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 09:04:10 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_convert_arg(char c, va_list arg_ptr);
int		ft_arg_len(char c, va_list copy);
int		ft_len_signed(char c, long long nb);
int		ft_len_unsigned(char c, unsigned long long nb);
void	ft_putstr_printf_fd(char *s, int fd);
void	ft_putnbr_base(unsigned long long nb, char *base);
void	ft_putnbr_unsigned_fd(unsigned int nb, int fd);

#endif
