/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:19:17 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/19 09:12:34 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_printf_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		write(fd, "(null)", 6);
	else
	{
		while (s[i])
			i++;
		write (fd, s, i);
	}
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
	fd = open("test_ft_putstr_fd", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putstr("fd = ");
	ft_putnbr(fd);
	// My function
	ft_putstr_fd(s, fd);

	// Close the test file
	if (close(fd) == -1)
		ft_putstr("close() failed \n");
	return (0);
}

// === END OF MY TEST === //
*/
