/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:28:48 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 12:28:14 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest,
const char *restrict source, size_t sizedest)
{
	char	*sourcestr;
	size_t	destlen;
	size_t	sourcelen;
	size_t	i;

	destlen = ft_strlen(dest);
	sourcelen = ft_strlen(source);
	sourcestr = (char *)source;
	i = 0;
	if (sizedest == 0)
		return (sourcelen);
	if (sizedest < destlen)
		return (sizedest + sourcelen);
	while (sourcestr[i] && (i + destlen < sizedest - 1))
	{
		dest[i + destlen] = sourcestr[i];
		i++;
	}
	dest[i + destlen] = '\0';
	while (sourcestr[i])
		i++;
	return (i + destlen);
}
