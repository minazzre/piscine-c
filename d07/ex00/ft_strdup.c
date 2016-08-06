/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:21:54 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/20 18:35:45 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	if (src == NULL)
		return (0);
	size = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
