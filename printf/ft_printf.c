/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:08:20 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/18 11:27:09 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	specifier(struct t_flag *flags)
{
	ssize_t	ret;

	ret = 0;
	if (flags->format[0] == '%' && flags->format[1] != '\0')
	{
		if (flags->format[0] == '%' && flags->format[1] == '%')
		{
			ret = ret + write(1, "%", 1);
			flags->format += 2;
			return (ret);
		}
		ret = ret + ft_subspecifier(flags);
		ret = ret + ft_printspecified(flags);
	}
	return (ret);
}

ssize_t	ft_printf(const char *str, ...)
{
	struct t_flag	*flags;
	ssize_t			ret;

	ret = 0;
	flags = ft_initflags(str);
	if (!flags)
		return (0);
	va_start(flags->args, str);
	while (flags->format[0] != '\0')
	{
		ret += ft_printformat(flags);
		ret += specifier(flags);
	}
	va_end(flags->args);
	free (flags);
	return (ret);
}
