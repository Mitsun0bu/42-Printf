/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:31:45 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/14 11:41:05 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c < 128)
		return (1);
	else
		return (0);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	test_1;
	int	test_2;

	test_1 = '*';
	test_2 = 345;
	printf("test_1 with '*'   (result expected 1) 	: 	%d\n", test_1);
	printf("test_2 with '345' (result expected 0) 	: 	%d\n", test_2);
	printf("result_1 isascii	                    :	%d\n", isascii(test_1));
	printf("result_1 ft_isascii	                    : 	%d\n", ft_isascii(test_1));
	printf("result_2 isascii	                    : 	%d\n", isascii(test_2));
	printf("result_2 ft_isascii	                    : 	%d\n", ft_isascii(test_2));
	return (0);
}

// === END OF MY TEST === //
*/
