/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:09:02 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/19 11:17:41 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*returns;

	returns = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (returns == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		returns[i] = s1[i];
		i++;
	}
		j = 0;
	while (s2[j])
	{
		returns[i + j] = s2[j];
		j++;
	}
	returns[i + j] = '\0';
	return (returns);
}
