/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:42:47 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:44:04 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	idx;

	len = 0;
	while (s1[len])
		len++;
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	idx = 0;
	while (s1[idx])
	{
		dup[idx] = s1[idx];
		idx++;
	}
	dup[idx] = '\0';
	return (dup);
}
