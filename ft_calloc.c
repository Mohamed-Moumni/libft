/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:58:27 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/08 14:00:31 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	mem = (void *)malloc(count * size);
	if (!mem)
		return (NULL);
	while (i <= count * size)
	{
		((unsigned char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}
