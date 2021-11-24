/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:12:20 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 12:47:01 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
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

	test_1 = '4';
	test_2 = '*';
	printf("test_1 with '4' (result expected 1) :	%d\n", test_1);
	printf("test_2 with '*' (result expected 0) :	%d\n", test_2);
	printf("result_1 isalnum		:	%d\n", isalnum(test_1));
	printf("result_1 ft_isalnum		:	%d\n", ft_isalnum(test_1));
	printf("result_2 isalnum		:	%d\n", isalnum(test_2));
	printf("result_2 ft_isalnum		:	%d\n", ft_isalnum(test_2));
	return (0);
}

// === END OF MY TEST === //
*/
