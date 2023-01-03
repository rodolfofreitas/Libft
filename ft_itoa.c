/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:24:08 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/18 23:45:26 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcount(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*str;

	nb = n;
	len = ft_charcount(nb) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	str[--len] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}
