/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:04:55 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/20 16:41:29 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict source, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && source[i] != '\0')
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}
