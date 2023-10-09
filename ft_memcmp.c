/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 01:59:07 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/10 01:59:07 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s2 = (char *)p2;
	s1 = (char *)p1;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i + 1) < size)
		i ++;
	return (s1[i] - s2[i]);
}
