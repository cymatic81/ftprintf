/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:08:16 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 11:21:17 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	char	*strcpy;
	char	xc;
	int		i;
	int		length;

	strcpy = (char *)str;
	xc = (char) x;
	i = 0;
	length = ft_strlen(strcpy);
	if (xc == '\0')
		return (&strcpy[length]);
	while (strcpy[i] != xc && strcpy[i])
		i++;
	if (strcpy[i] != xc)
		return (NULL);
	return (&strcpy[i]);
}
