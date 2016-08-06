/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:33:49 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/19 23:34:46 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int number;

	i = 0;
	neg = 0;
	number = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (48 <= str[i] && str[i] <= 57)
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-number);
	else
		return (number);
}
