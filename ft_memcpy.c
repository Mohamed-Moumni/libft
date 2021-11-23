/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:10:33 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/08 12:38:30 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		*(d++) = *(s++);
		i++;
	}
	return (dst);
}
