/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:01:49 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/29 20:20:34 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_recursive(char const *s, char c, int count, char **list )
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (s && *s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	if (i > 0)
		str = malloc(sizeof(char) * (i + 1));
	if (str)
		str[i] = '\0';
	i = 0;
	while (str && s && *s && *s != c)
		str[i++] = *s++;
	if (str)
		list = ft_split_recursive(s, c, count + 1, list);
	else
		list = malloc(sizeof(char *) * (count + 1));
	if (list)
		list[count] = str;
	return (list);
}

char	**ft_split(char const *s, char c)
{
	return (ft_split_recursive(s, c, 0, NULL));
}
