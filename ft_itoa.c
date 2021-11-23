/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:34:51 by mmoumni           #+#    #+#             */
/*   Updated: 2021/11/04 11:50:36 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*number;
	int		nb_len;
	int		check;

	nb = n;
	nb_len = ft_digits(nb);
	number = (char *)malloc(nb_len + 1);
	if (!number)
		return (NULL);
	check = 0;
	if (nb < 0)
	{
		number[0] = '-';
		check = 1;
		nb = -nb;
	}
	number[nb_len] = '\0';
	while (--nb_len >= check)
	{
		number[nb_len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (number);
}
