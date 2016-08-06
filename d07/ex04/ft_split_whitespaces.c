/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:42:15 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/21 15:42:23 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		get_word_nb(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if ((is_separator(str[i]) == 0) && (is_separator(str[i + 1]) == 1))
			nb++;
		i++;
	}
	return (nb);
}

char	*ft_strdump(int i, char *str)
{
	int		j;
	char	*result;

	j = 0;
	result = (char*)malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		result[j] = str[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		size;
	char	**result;

	i = 0;
	j = 0;
	size = get_word_nb(str);
	result = (char**)malloc(sizeof(char*) * (get_word_nb(str) + 1));
	while (str[i] && j < size)
	{
		while (is_separator(str[i]) == 1)
			str++;
		while (is_separator(str[i]) == 0)
			i++;
		result[j] = ft_strdump(i, str);
		j++;
		str += i;
		i = 0;
	}
	result[j] = 0;
	return (result);
}
