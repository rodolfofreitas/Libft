/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:03:53 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/11/20 15:20:49 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*novalista;

	novalista = (t_list *)malloc(sizeof(t_list));
	if (!novalista)
		return (NULL);
	novalista->content = content;
	novalista->next = NULL;
	return (novalista);
}
