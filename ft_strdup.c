/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:00:45 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/18 23:46:19 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;
	int		i;

	temp = malloc(ft_strlen(s) + 1);
	i = -1;
	if (!temp)
		return (NULL);
	while (s[++i])
		temp[i] = s[i];
	temp[i] = '\0';
	return (temp);
}
