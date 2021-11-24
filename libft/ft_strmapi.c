/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:54:38 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/12 11:36:41 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	if (!s || !f)
		return (NULL);
	new_s = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

char	ft_iteration(unsigned int iterator, char c)
{
	char iterated;

	iterated = c + iterator;
		return (iterated);
}

int	main()
{
	char const	*s = "HELLO WORLD";

	printf("%s", ft_strmapi(s, &ft_iteration));
	return (0);
}

// === END OF MY TEST === //
*/
