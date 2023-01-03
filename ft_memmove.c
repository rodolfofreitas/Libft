/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:00:12 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/18 23:45:43 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dst;
	unsigned char		*sc;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (size--)
			dst[size] = sc[size];
	}
	if (dest < src)
	{
		while (size--)
		{	
			dst[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
