/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:45:05 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/19 11:58:18 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i] != c)
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	word_length(char const *s, char c)
{
	int length;

	length = 0;
	while (s[length] != c && s[length])
	{
		length++;
	}
	return (length);
}

static char	**arr_alloc(char const *s, char c)
{
	char	**arr;
	int		idx;

	if (!s | !(arr = (char**)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!(arr[idx] = (char*)malloc(sizeof(char) *
							(word_length(s, c) + 1))))
				return (NULL);
			idx++;
			while (*s != c && *s)
				s++;
		}
		while (*s == c && *s)
			s++;
	}
	arr[idx] = NULL;
	return (arr);
}

static char	**arr_copy(char const *s, char c, char **arr)
{
	int i;
	int j;
	int end;

	end = word_count(s, c);
	i = 0;
	while (*s)
	{
		j = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			arr[i][j] = (char)*s;
			j++;
			s++;
		}
		if (i < end)
		{
			arr[i][j] = '\0';
			i++;
		}
	}
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char **arr;

	arr = NULL;
	if (!s)
		return (0);
	if (!(arr = arr_alloc(s, c)))
		return (NULL);
	arr = arr_copy(s, c, arr);
	return (arr);
}
