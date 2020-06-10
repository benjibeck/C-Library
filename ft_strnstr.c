/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:44:40 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:50:17 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t pos;
	size_t idx;
	size_t scan_len;

	if (!*needle)
		return ((char*)haystack);
	pos = 0;
	scan_len = len - ft_strlen(needle) + 1;
	while (haystack[pos] && pos < scan_len)
	{
		idx = 0;
		if (haystack[pos] == needle[idx])
		{
			while (haystack[pos + idx] == needle[idx] && needle[idx] &&
					(pos + idx) < len)
				idx++;
		}
		if (!needle[idx])
			return ((char*)&haystack[pos]);
		pos++;
	}
	return (NULL);
}
