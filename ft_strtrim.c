/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:45:34 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:55:26 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static int	find_last(const char *str)
{
	int i;
	int last;

	i = 0;
	last = 0;
	while (str[i])
	{
		if (!is_space(str[i]))
			last = i;
		i++;
	}
	return (last);
}

static int	trimmed_length(char *str)
{
	int i;
	int count;
	int end;

	i = 0;
	count = 0;
	end = ft_strlen(str) - 1;
	while (is_space(str[i]))
		i++;
	while (is_space(str[end]))
		end--;
	while (i <= end)
	{
		count++;
		i++;
	}
	return (count);
}

char		*ft_strtrim(char const *s)
{
	char	*trimmed;
	int		i;
	int		j;

	if (!s)
		return (0);
	if (!(trimmed = (char*)malloc(sizeof(char) *
					(trimmed_length((char*)s) + 1))))
		return (NULL);
	ft_bzero(trimmed, trimmed_length((char*)s) + 1);
	i = 0;
	while (is_space(s[i]))
		i++;
	j = 0;
	while (s[i] && i <= find_last(s))
	{
		trimmed[j] = s[i];
		i++;
		j++;
	}
	return (trimmed);
}
