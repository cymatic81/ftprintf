/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:51:10 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 13:04:04 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	char	*strcopy1;
	char	*strcopy2;
	size_t	i;

	strcopy1 = (char *)string1;
	strcopy2 = (char *)string2;
	i = 0;
	while (i < n && strcopy1[i] == strcopy2[i])
	i++;
	if (i < n)
		return ((unsigned char)strcopy1[i] - (unsigned char)strcopy2[i]);
	return (0);
}
