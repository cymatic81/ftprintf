/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfxtoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:32:54 by jchapman          #+#    #+#             */
/*   Updated: 2022/11/18 14:05:15 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str [i] >= 'a')
			str[i] -= 32;
	i++;
	}
}

static void	hextochar(char *str, unsigned long long hex, int xtra, int len)
{
	int	i;

	i = 1;
	if (hex < 0)
		hex *= -1;
	while (hex > 15)
	{
		if (hex % 16 < 10)
			str[xtra + len - i] = (hex % 16) + '0';
		else
			str[xtra + len - i] = (hex % 16) - 10 + 'a';
		hex /= 16;
		i++;
	}
	if (hex % 16 < 10)
		str[xtra + len - i] = (hex % 16) + '0';
	else
		str[xtra + len - i] = (hex % 16) - 10 + 'a';
	str[len + xtra] = '\0';
}

static int	length(unsigned long long hex)
{
	int	ret;

	ret = 1;
	if (hex > 15)
	{
		hex /= 16;
		ret = ret + length(hex);
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

char	*ft_printfxtoa(struct t_flag *flags, unsigned long long hex)
{
	int		len;
	int		xtra;
	char	*str;

	xtra = 0;
	len = length(hex);
	if (flags->hash == 1 || flags->format[0] == 'p')
		xtra = 2;
	if (flags->precision != -1 && flags->precision > len)
		str = malloc((sizeof (char)) * (flags->precision + xtra + 1));
	else
		str = malloc((sizeof (char)) * (len + xtra + 1));
	if (!str)
		return (NULL);
	if (flags->hash == 1 || flags->format[0] == 'p')
	{
		str[0] = '0';
		str[1] = 'x';
	}
	if (len < flags->precision)
		xtra += padzero(str, flags->precision - len, xtra);
	hextochar(str, hex, xtra, len);
	if (flags->format[0] == 'X')
		toupper(str);
	return (str);
}
