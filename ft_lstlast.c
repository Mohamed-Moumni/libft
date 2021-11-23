/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:46:41 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/07 13:49:26 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_elem;

	if (lst)
	{
		tmp_elem = lst;
		while (tmp_elem->next)
		{
			tmp_elem = tmp_elem->next;
		}
		return (tmp_elem);
	}
	else
		return (NULL);
}
