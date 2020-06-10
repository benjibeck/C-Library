/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:45:12 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/17 18:50:27 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *p_needle;
	char *p_haystack;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			p_needle = (char*)needle;
			p_haystack = (char*)haystack;
			while (*p_needle == *p_haystack)
			{
				p_needle++;
				p_haystack++;
				if (!*p_needle)
					return ((char*)haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
