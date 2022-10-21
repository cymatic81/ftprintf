/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:28:34 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/21 16:46:30 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	isspecifier(const char *str)
{	
	char	*set;
	int		i;

	i = 0;
	set = "cspdiuxX";
	while (set[i])
	{
		if (set[i] == str[0])
			return (1);
		i++;
	}
	return (0);
}

void	ft_setflags(struct t_flag *flags)
{
	int	tf;

	while (flags->format)
	{
		tf = isspecifier(flags->format);
		if (tf == 1)
			break ;
		if (flags->format[0] == '-')
			flags->leftjustify = 1;
		if (flags->format[0] == '#')
			flags->hash = 1;
		if (flags->format[0] == ' ')
			flags->space = 1;
		if (flags->format[0] == '+')
			flags->sign = 1;
		if (flags->format[0] == '.')
		{
			flags->format++;
			flags->precision = ft_printfatoi(flags);
		}
		else if (flags->format[0] >= '0' && flags->format[0] <= '9')
			flags->width = ft_printfatoi(flags);
		flags->format++;
	}
}
