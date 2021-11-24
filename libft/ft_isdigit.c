/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:08:25 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 13:47:27 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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

	test_1 = '5';
	test_2 = '*';
	printf("test_1 with 5 (result expected 1) : 	%d\n", test_1);
	printf("test_2 with 42 (result expected 0) : 	%d\n", test_2);
	printf("result_1 isdigit		:	%d\n", isdigit(test_1));
	printf("result_1 ft_isdigit		: 	%d\n", ft_isdigit(test_1));
	printf("result_2 isdigit		: 	%d\n", isdigit(test_2));
	printf("result_2 ft_isdigit		: 	%d\n", ft_isdigit(test_2));
	return (0);
}

// === END OF MY TEST === //
*/
