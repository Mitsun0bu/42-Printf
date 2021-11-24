/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:20:07 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 16:38:56 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c);
static int	ft_islower(int c);

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == 1 || ft_islower(c) == 1)
		return (1);
	else
		return (0);
}

static int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
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

	test_1 = 'b';
	test_2 = '6';
	printf("result_1 isalpha with b		:	%d\n", isalpha(test_1));
	printf("result_1 ft_isalpha with b	:	%d\n", ft_isalpha(test_1));
	printf("result_2 isalpha with 6		:	%d\n", isalpha(test_2));
	printf("result_2 ft_isalpha with 6	:	%d\n", ft_isalpha(test_2));
	return (0);
}

// === END OF MY TEST === //
*/
