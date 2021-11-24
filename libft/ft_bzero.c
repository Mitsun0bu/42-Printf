/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:03:56 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 12:29:10 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

int main()
{
	int		array [] = {54, 85, 20, 63, 21};
	size_t	n = sizeof(int) * 5;
	int		len;

	printf("Initial array values : ");
	for(len = 0; len < 5; len++)
		printf("%d ", array[len]);
	printf("\n");

	// Reset the memory bloc
	ft_bzero(array, n);

	printf("Array values after ft_bzero : ");
	for(len = 0; len < 5; len++)
		printf("%d ", array[len]);
	printf( "\n" );

	return (0);
}

// === END OF MY TEST === //
*/
