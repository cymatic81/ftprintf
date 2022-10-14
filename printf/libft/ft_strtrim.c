/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:53:47 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/22 12:26:27 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{	
		if (a == set[i])
			return (1);
	i++;
	}
	return (0);
}

static char	*copystr(char *dest, const char *source, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*returns;
	char	*tempstr;
	int		end;
	int		start;

	tempstr = ft_strdup(s1);
	if (!tempstr)
		return (NULL);
	end = (ft_strlen(s1) - 1);
	if (end < 0)
		end = 0;
	while (trim(tempstr[end], set) == 1)
	{
		tempstr[end] = '\0';
		end--;
	}
	start = 0;
	while (trim(tempstr[start], set))
		start++;
	returns = malloc(sizeof (char) * (end - start + 2));
	if (!returns)
		return (NULL);
	returns = copystr(returns, &tempstr[start], (end - start + 1));
	free(tempstr);
	return (returns);
}
