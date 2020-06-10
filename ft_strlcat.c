/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:43:19 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/17 20:14:50 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t cat_len;
	size_t dst_len;
	size_t odst_len;
	size_t src_len;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	odst_len = dst_len;
	if (dst_len == size)
		return (dst_len + ft_strlen(src));
	src_len = 0;
	cat_len = size - dst_len - 1;
	while (src[src_len])
	{
		if (cat_len != 0)
		{
			dst[dst_len] = src[src_len];
			cat_len--;
			dst_len++;
		}
		src_len++;
	}
	dst[dst_len] = '\0';
	return (odst_len + src_len);
}
