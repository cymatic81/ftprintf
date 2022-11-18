/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspecified.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:03:04 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/17 12:52:19 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printspecified(struct t_flag *flags)
{
	if (flags->format[0] == 'c')
		return (ft_printchar(flags));
	if (flags->format[0] == 's')
		return (ft_printstr(flags));
	if (flags->format[0] == 'i' || flags->format[0] == 'd'
		|| flags->format[0] == 'u')
		return (ft_printdecimal(flags));
	if (flags->format[0] == 'X' || flags->format[0] == 'x'
		|| flags->format[0] == 'p')
		return (ft_printhex(flags));
	return (0);
}
