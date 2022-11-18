/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:53:28 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/18 14:06:22 by jchapman         ###   ########.fr       */
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
	const char		*format;
	va_list			args;
	unsigned int	width;
	int				precision;
	unsigned int	leftjustify;
	unsigned int	hash;
	unsigned int	space;
	unsigned int	sign;	
}	t_flag;

void			ft_resetflags(struct t_flag *flags);
void			ft_setflags(struct t_flag *flags);
ssize_t			ft_printf(const char *str, ...);
struct t_flag	*ft_initflags(const char *str);
ssize_t			ft_printformat(struct t_flag *flags);
ssize_t			ft_subspecifier(struct t_flag *flags);
unsigned int	ft_printfatoi(struct t_flag *flags);
ssize_t			ft_printspecified(struct t_flag *flags);
ssize_t			ft_printchar(struct t_flag *flags);
ssize_t			ft_printstr(struct t_flag *flags);
ssize_t			ft_printdecimal(struct t_flag *flags);
char			*ft_printfitoa(struct t_flag *flags, long dec);
char			*ft_printfxtoa(struct t_flag *flags, unsigned long long dec);
ssize_t			ft_printhex(struct t_flag *flags);

#endif
