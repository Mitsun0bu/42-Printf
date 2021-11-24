/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:33:30 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 16:38:51 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	*src = "\0";
	char	dst_1[0xF00] = "salut";
	char	dst_2[0xF00] = "salut";
	size_t	dstsize = 4;

	printf("src : %s, len src : %zu\n", src, ft_strlen(src));
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n\n", dst_2);
	//	Native function
	printf("Result of strlcpy : %lu\n", strlcpy(dst_1, src, dstsize));
	printf("dst_1 after strlcpy : %s\n", dst_1);
	printf("len dst_1 after strlcp : %zu\n\n", ft_strlen(dst_1));
	//	My function
	printf("Result of ft_strcpy : %lu\n", ft_strlcpy(dst_2, src, dstsize));
	printf("dst_2 after ft_strlcpy : %s\n", dst_2);
	printf("len dst_2 after ft_strlcpy : %zu\n", ft_strlen(dst_2));
	return (0);
}

// === END OF MY TEST ===
*/
