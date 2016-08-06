/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:48:04 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/15 19:13:32 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int counter;
	int revcounter;
	char temp;

	counter = 0;
	revcounter = 0;
	while (str[counter])
		counter++;
	counter -= 1;
	while (revcounter < counter)
	{
		temp = str[revcounter];
		str[revcounter] = str[counter];
		str[counter] = temp;
		counter--;
		revcounter++;
	}
	return (str);
}
