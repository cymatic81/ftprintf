/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:12:14 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/18 14:04:12 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printhex(struct t_flag *flags)
{
	unsigned long long	hex;
	ssize_t				len;
	ssize_t				ret;
	char				*str;

	ret = 0;
	if (flags->format[0] == 'p')
		hex = (unsigned long long) va_arg(flags->args, void *);
	else
		hex = (unsigned long long) va_arg(flags->args, unsigned int);
	str = ft_printfxtoa(flags, hex);
	flags->format++;
	len = ft_strlen(str);
	if (flags->leftjustify == 1)
	{
		ret = ret + write(1, str, len);
		while (ret < flags->width)
			ret = ret + write(1, " ", 1);
		return (ret);
	}
	while (ret + len < flags->width)
		ret = ret + write(1, " ", 1);
	ret = ret + write(1, str, len);
	free(str);
	return (ret);
}
