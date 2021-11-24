/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:08:22 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 16:38:54 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src >= dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i ++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len --;
		}
	}
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	char	src_1[] = "Salutmemmove";
	char	src_2[] = "Salutmemmove";
	size_t	len = sizeof(char) * 6;

	// Native function
	printf("Initial src_1 value :	%s\n", src_1);
	memmove(src_1 + 5, src_1 + 2, len);
	printf("Final src_1 value :	%s\n\n", src_1);

	// My function
	printf("Initial src_2 value :	%s\n", src_2);
	ft_memmove(src_2 + 5, src_2 + 2, len);
	printf("Final src_2 value :	%s\n", src_2);
    return (0);
}

// === END OF MY TEST ===
*/
