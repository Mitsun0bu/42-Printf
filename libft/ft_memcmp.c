/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:43:58 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 13:59:17 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i ++;
	}
	return (0);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s1[] = "HELLO";
	char	s2[] = "SALUT";
	size_t	n = sizeof(char) * 3;

	printf("String 1 : %s\n", s1);
	printf("String 2 : %s\n", s2);

	// Comparison between s1 and s2
	//	Native function
	printf("Result of memcmp :	%d\n", memcmp(s1, s2, n));
	//	My function
	printf("Result of ft_memcmp :	%d\n", ft_memcmp(s1, s2, n));
	return (0);
}

// === END OF MY TEST ===
*/
