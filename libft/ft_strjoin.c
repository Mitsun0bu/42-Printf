/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:46:00 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/08 12:04:45 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*joined;
	int		i_1;
	int		i_2;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * len + 1);
	if (joined == NULL)
		return (NULL);
	j = 0;
	i_1 = 0;
	while (s1[i_1])
		joined[j++] = s1[i_1++];
	i_2 = 0;
	while (s2[i_2])
		joined[j++] = s2[i_2++];
	joined[j] = '\0';
	return (joined);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char const	s2[50] = "BOYS";
	char const	s1[50] = "HELLO";

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

	//	My function
	printf("Result of ft_strjoin : %s\n", ft_strjoin(s1, s2));
	return (0);
}

// === END OF MY TEST ===
*/
