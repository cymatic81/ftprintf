/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initflags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:29 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/19 18:05:47 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

struct t_flag	*ft_initflags(const char *str)
{
	struct t_flag	*flags;

	flags = malloc(sizeof (struct t_flag));
	if (!flags)
		return (NULL);
	flags->format = str;
	return (flags);
}
