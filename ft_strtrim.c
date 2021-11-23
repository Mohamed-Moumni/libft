/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:12:41 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/06 13:45:10 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_index(char const *s, char const *set, int *start)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	while (s[i] && ft_isset(set, s[i]))
		i++;
	if (s[i] != '\0')
		*start = i;
	while (s[i])
		i++;
	i--;
	while (i >= 0 && ft_isset(set, s[i]))
		i--;
	end = i;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;
	int	end;

	if (s1 && set)
	{
		start = 0;
		end = ft_index(s1, set, &start);
		len = end - start + 1;
		return (ft_substr(s1, (unsigned int)start, len));
		return (0);
	}
	else
		return (NULL);
}
