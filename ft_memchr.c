/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:40:15 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:39:16 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_s;

	p_s = (unsigned char*)s;
	while (n)
	{
		if (*p_s == (unsigned char)c)
			return (p_s);
		p_s++;
		n--;
	}
	return (NULL);
}
