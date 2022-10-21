/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspecified.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:03:04 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/20 17:25:46 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printspecified(struct t_flag *flags)
{
	if (flags->format[0] == 'c')
		return (ft_printchar(flags));
//	if (flags->format[0] == 's')
//		return (ft_printstr(va_arg(flags->args, *char)));
//	if (flags->format[0] == 'i' || flags->format[0] == 'd')
//		return (ft_printdecimal(va_arg(flags->args, int)));
//	if (flags->format[0] == 'u')
//		return (ft_printdecimal(va_arg(flags->args, unsigned int)));
//	if (flags->format[0] == 'X' || flags->format[0] == 'x')
//		return (ft_printhex(va_arg(flags->args, unsigned int)));
//	if (flags->format[0] == 'p')
//		return (ft_printhex(va_arg(flags->args, unsigned long)));
	return (0);
}
