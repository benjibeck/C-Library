/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:40:24 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:40:09 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*p_s1;
	unsigned char		*p_s2;
	size_t				i;

	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	i = 0;
	if ((!s1 && !s2) || !n)
		return (0);
	while (p_s1[i] == p_s2[i] && i < (n - 1))
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)p_s1[i] - (unsigned char)p_s2[i]);
}
