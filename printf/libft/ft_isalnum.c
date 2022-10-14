/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:55:31 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/19 14:13:54 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)

{
	if ((x >= '0' && x <= '9') || (x >= 'A' && x <= 'Z')
		|| (x >= 'a' && x <= 'z'))
		return (x);
	else
		return (0);
}