/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:49:21 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/19 13:05:30 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t length)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *) str;
	while (i < length)
	{
		b[i] = x;
		i++;
	}
	return (str = b);
}
