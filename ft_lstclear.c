/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:25:51 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/07 18:06:19 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_elem;
	t_list	*next_elem;

	if (lst && del)
	{
		if (*lst)
		{
			tmp_elem = *lst;
			while (tmp_elem != NULL)
			{
				next_elem = tmp_elem->next;
				ft_lstdelone(tmp_elem, del);
				tmp_elem = next_elem;
			}
			*lst = NULL;
		}
	}
}
