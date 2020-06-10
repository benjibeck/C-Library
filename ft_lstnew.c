/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:39:49 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/20 11:45:47 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *link;

	if (!(link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		if (!(link->content = (void*)malloc(sizeof(content_size))))
		{
			free(link);
			return (NULL);
		}
		link->content = ft_memcpy(link->content, content, content_size);
		link->content_size = (size_t)content_size;
	}
	link->next = NULL;
	return (link);
}
