/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:32:29 by jchapman          #+#    #+#             */
/*   Updated: 2022/09/23 11:19:21 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*spointer;

	spointer = malloc(sizeof(t_list));
	if (spointer == (NULL))
		return (NULL);
	spointer->content = content;
	spointer->next = NULL;
	return (spointer);
}
