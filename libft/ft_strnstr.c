/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:34:16 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 09:52:16 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while ((haystack[k] == needle[j] && k < len) || needle[j] == '\0')
			{
				if (needle[j] == '\0')
					return ((char *)haystack + i);
				k ++;
				j ++;
			}
		}
		i ++;
	}
	return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	haystack[] = "SALUT";
	char	needle[] = "LUS";
	size_t	len = 4;

	printf("haystack: %s\n", haystack);
	printf("needle: %s\n", needle);
	//	Native function
	printf("Result of strnstr : %s\n", strnstr(haystack, needle, len));
	//	My function
	printf("Result of ft_strnstr : %s\n", ft_strnstr(haystack, needle, len));
	return (0);
}

// === END OF MY TEST ===
*/
