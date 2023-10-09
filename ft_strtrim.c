/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:57:14 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/11 19:57:14 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const c, char const *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (0);
	return (1);
}

size_t	ft_aux(char const *s1, char const *set)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	while (!is_set(s1[i], set))
		i ++;
	if (!s1[i])
		return (0);
	while (s1[i])
	{
		a ++;
		i ++;
	}
	i--;
	while (!is_set(s1[i], set))
	{
		a --;
		i --;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	a;
	size_t	len;
	char	*s;

	len = ft_aux(s1, set) + 1;
	s = malloc(sizeof(char) * len);
	if (!s)
		return (NULL);
	a = 0;
	i = 0;
	while (!is_set(s1[i], set))
		i ++;
	while (a < len - 1)
	{
		s[a++] = s1[i++];
	}
	s[a] = 0;
	return (s);
}
