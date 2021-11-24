/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:35:30 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:20:01 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(size * count);
	if (result == 0)
		return (0);
	ft_bzero(result, (size * count));
	return (result);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int n = 5;
	int	*table_malloc = (int *) malloc(n * sizeof(int));
	int	*table_calloc = (int *) calloc(n, sizeof(int));
	int	*table_ft_calloc = (int *) ft_calloc(n, sizeof(int));

	// Illustrates the difference between malloc and calloc functions
	i = 0;
	while (i < n)
	{
		printf("%d |", table_malloc[i]);
		i++;
	}
	printf("\n");

	//Native function
	i = 0;
	while (i < n)
	{
		printf("%d |", table_calloc[i]);
		i++;
	}
	printf("\n");

	//My function
	i = 0;
	while (i < n)
	{
		printf("%d |", table_ft_calloc[i]);
		i++;
	}
	printf("\n");

	return (0);
}

// === END OF MY TEST === //
*/
