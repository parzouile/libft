/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:59:57 by aschmitt          #+#    #+#             */
/*   Updated: 2023/11/07 14:20:13 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		n;
	char	a;

	i = 0;
	n = -1;
	a = (char)c;
	while (str[i])
	{
		if (str[i] == a)
			n = i;
		i ++;
	}
	if (a == 0)
		return ((char *)str + i);
	if (n == -1)
		return (NULL);
	return ((char *)str + n);
}

/*
{
	int		i;
	int		n;
	char	a;

	n = -1;
	a = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			n = i;
		i ++;
	}
	if (c == 0)
		return (0);
	if (n == -1)
		return (NULL);
	return ((char *)str + a);
}*/