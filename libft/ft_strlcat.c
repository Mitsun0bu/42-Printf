/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:05:33 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 15:33:21 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_init;
	size_t	src_init;
	size_t	i;
	size_t	j;

	dst_init = ft_strlen(dst);
	src_init = ft_strlen(src);
	i = dst_init;
	j = 0;
	if (dstsize <= dst_init)
		return (src_init + dstsize);
	while (j < dstsize - dst_init - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_init + dst_init);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	src[50] = "BOYS";
	size_t	dstsize = 10;
	char	dst_1[50] = "HELLO";
	char	dst_2[50] = "HELLO";

	printf("src : %s\n", src);
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n", dst_2);

	//	Native function
	printf("Result of strlcat : %lu\n", strlcat(dst_1, src, dstsize));
	printf("dst_1 after strlcat : %s\n", dst_1);
	//	My function
	printf("Result of ft_strlcat : %zu\n", ft_strlcat(dst_2, src, dstsize));
	printf("dst_2 after strlcat : %s\n", dst_2);
	return (0);
}

// === END OF MY TEST ===
*/
