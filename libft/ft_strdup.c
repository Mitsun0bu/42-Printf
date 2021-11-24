/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:49:31 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:26:05 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s1[50] = "SALUT LES COPAINS";

	printf("s1 : %s\n", s1);
	//	Native function
	printf("Result of strdup : %s\n", strdup(s1));
	//	My function
	printf("Result of ft_strdup : %s\n", ft_strdup(s1));
	free(strdup(s1));
	free(ft_strdup(s1));
	return (0);
}

// === END OF MY TEST ===
*/
