/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:59:08 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/06 13:41:41 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*join;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		join = (char *)malloc(len + 1);
		if (!join)
			return (NULL);
		i = -1;
		j = 0;
		while (++i < ft_strlen(s1))
			join[i] = s1[i];
		while (j < ft_strlen(s2))
		{
			join[i + j] = s2[j];
			j++;
		}
		join[i + j] = '\0';
		return (join);
	}
	else
		return (NULL);
}
