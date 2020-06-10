/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:40:43 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:23:40 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned const char		*p_src;
	unsigned char			*p_dst;

	if ((!dst && !src) || !len)
		return (dst);
	p_src = (unsigned char*)src;
	p_dst = (unsigned char*)dst;
	i = 0;
	if (p_src < p_dst)
		while (++i <= len)
			p_dst[len - i] = p_src[len - i];
	else
		while (len-- > 0)
			*p_dst++ = *p_src++;
	return (dst);
}
