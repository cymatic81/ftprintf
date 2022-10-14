/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:53:28 by jchapman          #+#    #+#             */
/*   Updated: 2022/10/13 15:25:46 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct t_flag
{
	char			*format;
	char			datatype;
	va_list			args;
	unsigned int	width;
	unsigned int	precision;
	unsigned int	leftjustify;
	unsigned int	hash;
	unsigned int	space;
	unsigned int	sign;
	unsigned int	retlen;	
}	t_flags;

int	ft_printf(const char *str);

#endif
