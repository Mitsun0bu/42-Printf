/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:12:19 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/06 09:55:25 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

int main()
{
	int		array [] = {54, 85, 40, 63, 21};
	size_t	size = sizeof(int) * 5;
	int		len;

	printf("Initial array values : ");
	for(len = 0; len < 5; len++)
		printf("%d ", array[len]);
	printf("\n");

	// Set each byte to 1
	ft_memset(array, 1, size);

	printf("Array values after ft_memset (int representation) : ");
	for(len = 0; len < 5; len++)
		printf("%d ", array[len]);
	printf( "\n");

	printf("Array values after ft_memset (hexadecimal representation) : ");
	for(len = 0; len < 5; len++)
		printf("%08x ", array[len]);
	printf( "\n");

	printf("Array values after ft_memset (binary epresentation) : ");
	printf( "\n");
	for(len = 0; len < 5; len++)
	{
		ft_itobin(array[len]);
		printf( "\n");
	}
	return (0);
}

// === END OF MY TEST === //
*/
