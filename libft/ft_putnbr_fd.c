/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@stduent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:31:06 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/08 14:49:54 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = number * -1;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int		fd;
	int		n = 42;

	//Create and write on a test file
	fd = open("test_ft_putnbr_fd", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putstr("fd = ");
	ft_putnbr(fd);
	// My function
	ft_putnbr_fd(n, fd);

	// Close the test file
	if (close(fd) == -1)
		ft_putstr("close() failed \n");
	return (0);
}

// === END OF MY TEST === //
*/
