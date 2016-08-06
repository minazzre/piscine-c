/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:34:29 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/16 16:34:33 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;
	int result;

	i = 2;
	result = 0;
	if (nb <= 2)
		result = 2;
	if (nb == 3)
		result = nb;
	while (result == 0)
	{
		if (ft_is_prime(nb))
			result = nb;
		nb++;
	}
	return (result);
}
