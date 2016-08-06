/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 15:42:19 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/27 15:42:21 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*list;

	size = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
