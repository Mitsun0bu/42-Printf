/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:28:58 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 14:03:54 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

int main()
{
	char	string[] = "HELLO WORLD" ;

	// Native function
	printf("len of string determined w/ strlen  : %lu\n", strlen(string));

	// My function
	printf("len of string determined w/ ft_strlen  : %lu\n", ft_strlen(string));

	return (0);
}

// === END OF MY TEST === //
*/
