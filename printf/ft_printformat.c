/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:43:04 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/21 14:21:06 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printformat(struct t_flag *flags)
{
	ssize_t	ret;

	ret = 0;
	while (flags->format && flags->format[0] != '%')
	{
		ret = ret + write(1, flags->format, 1);
		flags->format++;
	}
	return (ret);
}
