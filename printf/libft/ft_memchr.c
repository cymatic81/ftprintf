/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:06:19 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 13:05:38 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*strcopy;
	char	ch;
	size_t	i;

	strcopy = (char *)str;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		if (strcopy[i] == ch)
			return (&strcopy[i]);
		i++;
	}
	return (NULL);
}
