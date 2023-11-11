/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:02:57 by aschmitt          #+#    #+#             */
/*   Updated: 2023/11/07 23:53:45 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s2 = (char *)p2;
	s1 = (char *)p1;
	i = 0;
	if (size == 0)
		return (0);
	while (s1[i] == s2[i] && (i + 1) < size)
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
