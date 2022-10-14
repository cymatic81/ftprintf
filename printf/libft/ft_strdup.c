/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:13:25 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 13:22:32 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tempptr;
	int		i;
	int		len;

	len = ft_strlen(str);
	tempptr = malloc (sizeof(char) * len + 1);
	if (tempptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		tempptr[i] = str[i];
		i++;
	}
	tempptr[i] = '\0';
	return (tempptr);
}
