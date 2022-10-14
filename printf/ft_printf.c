/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:29:16 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/07 13:28:26 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_printf(const char *str)
{
	int i = 0;
	
	i = ft_strlen(str);
	return (i);
}	
	/*	flag	*flags;
	
	flags.format = str;
	flags = malloc(sizeof flag);
	if (!flags)
		return (-1);
	va_start(flags.args, str);
	flags.width = 0;
	flags.presicion = 0;
	flags.leftjustify = 0;
	flags.hash = 0;
	flags.space = 0;
	flags.sign = 0;
	flags.retlen = 0;
	while(flags.format)
		while (flags.format != '%')
		{
			flags.retlen += write(1, flags.format, 1);
			flags.form:q
				at++;
		}
		if (flags.format = '%' && flags.format++ = '%')
		{
			flags.retlen += write(1, '%', 1);
			flags.format += 2;
		}
		else
		{
			flags.format++;
			while (flags != d,i,o,u,x,X) //fix me
			if (flags.format = '-')
				flags.leftjustify = 1;
			else if (flags.format = '#')
				flags.hash = 1;
			else if (flags.format = ' ')
				flags.space = 1;
			else if (flags.format = '+')
			{
				flags.sign = 1;
				flags.space = 0;
			}
			else if (flags.format = '.')
			{
				flags.format ++;
				while (flags.format >= '0' && flags.format <= '9')
				{
					flags.prescision = flags.prescision * 10;
					flags.prescision += flags.prescision - 48;
					flags.format++;
				}
			}
			else if (flags.format >= '0' && flags.format <= '9')
				while (flags.format >= '0' && flags.format <= '9')
				{
					flags.width = flags.width * 10;
					flags.width += (flags.format - 48);
					flags.format++;
				}
	}*/	
