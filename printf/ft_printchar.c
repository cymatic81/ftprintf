/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:43:41 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/21 16:02:16 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printchar(struct t_flag *flags)
{
	ssize_t	ret;
	char	a;

	a = va_arg(flags->args, int);
	ret = 0;
	flags->format++;
	if (flags->leftjustify == 1)
	{
		ret = ret + write(1, &a, 1);
		while (ret < flags->width)
			ret = ret + write(1, " ", 1);
		return (ret);
	}
	else
		while (ret + 1 < flags->width)	
			ret = ret + write(1, " ", 1);
		ret = ret + write(1, &a, 1);
	return (ret);
}
