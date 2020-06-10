/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:38:51 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/20 11:51:39 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		int_length(int n)
{
	int length;

	length = 0;
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n >= 10)
	{
		n /= 10;
		length++;
	}
	if (n < 10)
		length++;
	return (length);
}

static char		*int_to_string(char *str, int n, int len)
{
	int	i;

	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str = ft_strcpy(str, "-2147483648\0");
		return (str);
	}
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	str[i] = (n % 10) + '0';
	str[len] = '\0';
	return (ft_strrev(str));
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = int_length(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = int_to_string(str, n, len);
	return (str);
}
