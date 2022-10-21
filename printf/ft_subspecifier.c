/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:24:06 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/21 15:34:09 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_subspecifier(struct t_flag *flags)
{
	ssize_t	ret;
	
	ret = 0;
	while (flags->format[0] == '%' && flags->format[1] == '%')
	{
		ret = ret + write(1, "%", 1);
		flags->format = flags->format + 2;
		if (flags->format[0] != '%')
			return (ret);
	}
	flags->format++;
	ft_resetflags(flags);
	ft_setflags(flags);
	return (ret);	
}
