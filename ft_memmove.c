/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:25:04 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/09 11:02:36 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*psrc;
	unsigned char	*pdst;
	unsigned char	*ptmp;
	size_t			size;

	size = len;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	ptmp = psrc;
	if (pdst == psrc)
		return (dst);
	else
	{
		while (psrc != pdst && len > 0)
		{
			psrc++;
			len--;
		}
		if (pdst == psrc)
			while (size--)
				*(pdst + size) = *(ptmp + size);
		else
			ft_memcpy(pdst, ptmp, size);
	}
	return (dst);
}
