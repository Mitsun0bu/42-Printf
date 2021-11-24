/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:40:49 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 13:48:13 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <ctype.h>

int	main ()
{
	int	test_1;
	int	test_2;

	test_1 = '*';
	test_2 = 128;
	printf("test_1 with '*' (result expected 1) :	%d\n", test_1);
	printf("test_2 with '€' (result expected 0) :	%d\n", test_2);
	printf("result_1 isprint		:	%d\n", isprint(test_1));
	printf("result_1 ft_isprint		:	%d\n", ft_isprint(test_1));
	printf("result_2 isprint		:	%d\n", isprint(test_2));
	printf("result_2 ft_isprint		:	%d\n", ft_isprint(test_2));
	return (0);
}

// === END OF MY TEST === //
*/
