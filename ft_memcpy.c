/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:03:31 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/18 23:45:36 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	strd = (char *)dest;
	strs = (char *)src;
	i = -1;
	if (!src && !dest)
		return (0);
	while (++i < n)
		strd[i] = strs[i];
	return (dest);
}
