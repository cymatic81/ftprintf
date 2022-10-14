/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:52:38 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 11:31:23 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	char	*strcpy;
	char	xc;
	int		i;

	strcpy = (char *)str;
	xc = (char) x;
	i = ft_strlen(strcpy);
	if (xc == '\0')
		return (&strcpy[i]);
	while (strcpy[i] != xc && i > 0)
		i--;
	if (strcpy[i] != xc)
		return (NULL);
	return (&strcpy[i]);
}
