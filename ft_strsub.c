/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:45:24 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:51:57 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char					*new_str;
	unsigned int			i;

	if (!s || !(*s + start))
		return (0);
	if (!(new_str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len)
	{
		new_str[i] = s[start];
		i++;
		start++;
		len--;
	}
	new_str[i] = '\0';
	return (new_str);
}
