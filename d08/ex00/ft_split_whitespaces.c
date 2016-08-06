/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 15:01:30 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/23 15:01:32 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		get_word_nb(char *str)
{
	int	i;
	int word_nb;

	i = 0;
	word_nb = 0;
	while (str[i])
	{
		if ((is_sep(str[i]) == 0) && (is_sep(str[i + 1]) == 1))
			word_nb++;
		i++;
	}
	return (word_nb);
}

char	*get_word(char *str, int i, int j)
{
	int		k;
	char	*res;

	k = 0;
	res = (char*)malloc(sizeof(char) * (j + 1));
	while (k < j)
	{
		res[k] = str[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		word_nb;
	char	**res;

	i = 0;
	j = 0;
	k = 0;
	word_nb = get_word_nb(str);
	res = (char**)malloc(sizeof(char*) * (word_nb + 1));
	while (str[i] && k < word_nb)
	{
		while (is_sep(str[i + j]) == 1)
			i++;
		while (is_sep(str[i + j]) == 0)
			j++;
		res[k++] = get_word(str, i, j);
		i += j;
		j = 0;
	}
	res[k] = 0;
	return (res);
}
