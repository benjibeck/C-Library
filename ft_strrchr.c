/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:44:54 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/17 15:57:31 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char *p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (p);
}
