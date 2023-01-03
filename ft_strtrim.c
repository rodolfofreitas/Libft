/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:10:19 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/18 23:56:28 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inicio;
	size_t	fim;

	if (!s1 || !set)
		return (NULL);
	inicio = 0;
	fim = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[inicio]))
		inicio++;
	while (fim > inicio && ft_strchr(set, s1[fim]))
		fim--;
	return (ft_substr(s1, inicio, (fim - inicio) + 1));
}
