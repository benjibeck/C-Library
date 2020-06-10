/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:39:57 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/16 17:39:58 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_mem;

	if (!(new_mem = (void*)malloc(sizeof(new_mem) * size)))
		return (NULL);
	ft_bzero(new_mem, size);
	return (new_mem);
}
