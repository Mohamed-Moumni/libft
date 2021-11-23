/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:51:43 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/07 14:18:39 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp_elem;

	if (list && new)
	{
		if (!(*list))
			*list = new;
		else
		{
			tmp_elem = ft_lstlast(*list);
			tmp_elem->next = new;
		}
	}
}
