/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:42:11 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/07 13:46:26 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp_elem;

	size = 0;
	tmp_elem = lst;
	while (tmp_elem)
	{
		size++;
		tmp_elem = tmp_elem->next;
	}
	return (size);
}
