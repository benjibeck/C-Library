/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:43:13 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:45:38 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		join_len;

	if (!s1 || !s2)
		return (0);
	join_len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(new_str = ft_strnew(join_len)))
		return (NULL);
	new_str = ft_strcat(new_str, s1);
	new_str = ft_strcat(new_str, s2);
	return (new_str);
}
