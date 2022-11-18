/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resetflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:49 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/28 13:52:43 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_resetflags(struct t_flag *flags)
{
	flags->width = 0;
	flags->precision = -1;
	flags->leftjustify = 0;
	flags->hash = 0;
	flags->space = 0;
	flags->sign = 0;
}
