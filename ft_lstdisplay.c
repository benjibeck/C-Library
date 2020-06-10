/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:45:11 by bebeck            #+#    #+#             */
/*   Updated: 2019/09/20 11:52:18 by bebeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *begin)
{
	if (!begin)
		ft_putstr("null");
	else
	{
		while (begin)
		{
			ft_putstr((char*)begin->content);
			ft_putchar(' ');
			ft_putnbr((int)begin->content_size);
			ft_putchar('\n');
			begin = begin->next;
		}
	}
}
