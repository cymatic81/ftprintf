/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:34:32 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/20 15:29:05 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	char	*sourcestr;
	char	*returnstr;
	size_t	i;

	sourcestr = (char *) source;
	returnstr = (char *) dest;
	i = 0;
	if (dest == source)
		return (dest);
	if (source < dest)
	{
		while (len)
		{	
			returnstr[len - 1] = sourcestr[len - 1];
			len--;
		}
		return (returnstr);
	}
	while (i < len)
	{
		returnstr[i] = sourcestr[i];
		i++;
	}
	return (returnstr);
}
