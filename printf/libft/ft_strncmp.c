/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:41:37 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/21 12:09:02 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && string1[i] == string2[i] && string1[i] && string2[i])
	i++;
	if (i < n)
		return (((unsigned char)string1[i]) - ((unsigned char)string2[i]));
	return (0);
}
