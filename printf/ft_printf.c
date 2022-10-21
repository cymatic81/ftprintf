/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:08:20 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/20 18:15:57 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
ssize_t	ft_printf(const char *str, ...)
{
	struct t_flag	*flags;
	ssize_t	ret;

	ret = 0;
	flags = ft_initflags(str);
	if (!flags)
		return (0);
	va_start(flags->args, str);
	while (flags->format)
	{
		ret = ret + ft_printformat(flags);
		if (flags->format[0] == '%' && flags->format[1] != '\0')
		{
			ret = ret + ft_subspecifier(flags);
			ret = ret + ft_printspecified(flags);
		}
		else 
			return (ret);
	}
	printf("%d\n", flags->leftjustify);
	va_end(flags->args);
	free (flags);
	return (ret);
}
