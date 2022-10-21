/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfatoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:36:42 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/20 15:43:05 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_printfatoi(struct t_flag *flags)
{
	ssize_t	ret;

	ret = flags->format[0] - 48;
	if (flags->format[1] <= '9' && flags->format[1] >= '0')
	{
		flags->format++;
		ret = ret * 10;
		ret = ret + ft_printfatoi(flags);
	}
	return (ret);
}
