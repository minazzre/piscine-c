/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 17:00:07 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/26 17:00:09 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			j++;
	}
	if (j == i)
		return (1);
	i = -1;
	j = 0;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			j++;
	}
	if (j == i)
		return (1);
	return (0);
}
