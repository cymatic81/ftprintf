/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfitoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:32:54 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/18 12:54:05 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dectochar(char *str, long dec, int xtra, int len)
{
	int	i;

	i = 1;
	if (dec < 0)
		dec *= -1;
	while (dec > 9)
	{
		str[xtra + len - i] = (dec % 10) + '0';
		dec /= 10;
		i++;
	}
	str[xtra + len - i] = dec + '0';
	str[len + xtra] = '\0';
}

static int	length(long i)
{
	int	ret;

	ret = 1;
	if (i < -9 || i > 9)
	{
		i /= 10;
		ret = ret + length(i);
	}
	return (ret);
}

static int	padzero(char *str, int zeros, int xtra)
{
	int	ret;

	ret = zeros;
	while (zeros > 0)
	{
		str[(zeros - 1) + xtra] = '0';
		--zeros;
	}
	return (ret);
}

static void	addsign(char *str, long dec, unsigned int space)
{
	if (dec < 0)
		str[0] = '-';
	else if (space == 1)
		str[0] = ' ';
	else
		str[0] = '+';
}

char	*ft_printfitoa(struct t_flag *flags, long dec)
{
	int		len;
	int		xtra;
	char	*str;

	xtra = 0;
	len = length(dec);
	if (flags->sign == 1 || flags->space == 1 || dec < 0)
		xtra = 1;
	if (flags->precision != -1 && flags->precision > len)
		str = malloc((sizeof (char)) * (flags->precision + xtra + 1));
	else
		str = malloc((sizeof (char)) * (len + xtra + 1));
	if (!str)
		return (NULL);
	if (flags->sign == 1 || dec < 0 || flags->space == 1)
		addsign(str, dec, flags->space);
	if (len < flags->precision)
		xtra += padzero(str, flags->precision - len, xtra);
	dectochar(str, dec, xtra, len);
	return (str);
}
