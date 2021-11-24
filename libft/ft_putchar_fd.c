/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:57:18 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/05 09:58:41 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int		fd;
	char	c = 'a';

	//Create and write on a test file
	fd = open("test_ft_putchar_fd", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putstr("fd = ");
	ft_putnbr(fd);
	// My function
	ft_putchar_fd(c, fd);

	// Close the test file
	if (close(fd) == -1)
		ft_putstr("close() failed \n");
	return (0);
}

// === END OF MY TEST === //
*/