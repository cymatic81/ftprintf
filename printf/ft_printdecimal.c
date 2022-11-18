/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:12:14 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/17 12:45:33 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_printdecimal(struct t_flag *flags)
{
	long	dec;
	ssize_t	len;
	ssize_t	ret;
	char	*str;

	ret = 0;
	if (flags->format[0] == 'u')
		dec = (long)va_arg(flags->args, unsigned int);
	else
		dec = (long)va_arg(flags->args, int);
	str = ft_printfitoa(flags, dec);
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
