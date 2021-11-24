/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:41:23 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/08 12:30:39 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int		fd;
	char	*s = "HELL0 W0RLD";

	//Create and write on a test file
	fd = open("test_ft_putendl_fd", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	printf("fd = ");
	printf("%d\n", fd);
	// My function
	ft_putendl_fd(s, fd);

	// Close the test file
	if (close(fd) == -1)
		printf("close() failed \n");
	return (0);
}

// === END OF MY TEST === //
*/
