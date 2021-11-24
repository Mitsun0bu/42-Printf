/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:34:36 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/08 16:29:25 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s1[50] = "SALUT LES COPAINS";
	char	s2[50] = "SALUT LES COPINES";
	size_t	n = 3;

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	//	Native function
	printf("Result of strncmp : %d\n", strncmp(s1, s2, n));
	//	My function
	printf("Result of ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
	return (0);
}

// === END OF MY TEST ===
*/
