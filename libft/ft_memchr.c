/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:13:51 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 18:58:00 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	int	s[] = {'H', 'E', 'L', 'L', 'O'};
	int c = 'L';
	size_t	n = sizeof(int) * 5;
	int len = 0;

	printf("string values : ");
	for(len = 0; len < 5; len++)
		printf("%c ", s[len]);
	printf("\n");

	//	Search for the first occurence of c in string s
	//	Native function
	printf("Result of memchr : ");
		printf("%s", memchr(s, c, n));
	printf("\n");
	//	My function
	printf("Result of ft_memchr : ");
		printf("%s", ft_memchr(s, c, n));
	printf("\n");
	return (0);
}

// === END OF MY TEST ===
*/
