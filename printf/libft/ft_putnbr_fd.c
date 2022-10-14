/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:00:24 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/19 11:10:52 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa(n, fd)
{
	char	x;

	if (n > 9)
	{
		itoa(n / 10, fd);
		x = (n % 10) + '0';
		write(fd, &x, 1);
	}
	else
	{	
		x = n + '0';
		write(fd, &x, 1);
	}
}	

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{	
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * -1;
		}
		itoa(n, fd);
	}
}
