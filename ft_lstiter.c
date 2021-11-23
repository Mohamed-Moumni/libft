/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:12:27 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/07 15:34:37 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_elem;

	if (lst && f)
	{
		tmp_elem = lst;
		while (tmp_elem != NULL)
		{
			f(tmp_elem->content);
			tmp_elem = tmp_elem->next;
		}
	}
}
