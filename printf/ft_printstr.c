/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:45:51 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/17 15:55:12 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	leftjustify(struct t_flag *flags, ssize_t len, char *str)
{
	ssize_t	ret;

	ret = 0;
	if (flags->leftjustify == 1)
	{
		ret = ret + write(1, str, len);
		while (ret < flags->width)
			ret = ret + write(1, " ", 1);
		return (ret);
	}
	else
	{
		while (ret + len < flags->width)
			ret = ret + write(1, " ", 1);
		ret = ret + write(1, str, len);
	}
	return (ret);
}

ssize_t	ft_printstr(struct t_flag *flags)
{
	ssize_t	ret;
	ssize_t	len;
	char	*str;	

	ret = 0;
	flags->format++;
	str = (char *)va_arg(flags->args, char *);
	if (str == NULL)
	{
		ret = write(1, "(null)", 6);
		return (ret);
	}
	len = ft_strlen(str);
	if (flags->precision != -1 && flags->precision < len)
		len = flags->precision;
	ret += leftjustify(flags, len, str);
	return (ret);
}
