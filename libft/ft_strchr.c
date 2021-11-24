/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:53:13 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/11 19:11:23 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s[50] = "SALUT LES COPAINS";
	int		c = 'C';

	printf("s : %s\n", s);
	//	Native function
	printf("Result of strchr : %s\n", strchr(s, c));
	//	My function
	printf("Result of ft_strchr : %s\n", ft_strchr(s, c));
	return (0);
}

// === END OF MY TEST ===
*/
