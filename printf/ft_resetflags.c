/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resetflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:49 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/21 14:25:49 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_resetflags(struct t_flag *flags)
{
	flags->width = 0;
	flags->precision = 0;
	flags->leftjustify = 0;
	flags->hash = 0;
	flags->space = 0;
	flags->sign = 0;
	flags->ret = 0;
}
