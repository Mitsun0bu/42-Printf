/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:08:06 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/07 21:55:25 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	// TEST 1 - ft_memcpy

	char	src_1[] = "Start now";
	char	src_2[] = "Start now";
	size_t	n = sizeof(char) * 2;

	// Native function
	printf("Initial src_1 value : 	%s\n", src_1);
	memcpy(src_1 + 7, src_1, n);
	printf("Final src_1 value : 	%s\n\n", src_1);

	// My function
	printf("Initial src_2 value : 	%s\n", src_2);
	ft_memcpy(src_2 + 7, src_2, n);
	printf("Final src_2 value : 	%s\n\n", src_2);

	// TEST 2 - ft_memcpy

	char	*src_3 = NULL;
	char	*src_4 = NULL;
	n = 0;

	// Native function
	printf("Initial src_3 value :	%s\n", src_3);
	memcpy(src_3, src_3, n);
	printf("Final src_3 value :		%s\n\n", src_3);

	// My function
	printf("Initial src_4 value :	%s\n", src_4);
	ft_memcpy(src_3, src_3, n);
	printf("Final src_4 value :		%s\n\n", src_4);

	printf("memcmp : %d\n", memcmp(src_3, src_4, 1));

    return (0);
}

// === END OF MY TEST ===
*/
