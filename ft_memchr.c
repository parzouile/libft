/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:02:19 by aschmitt          #+#    #+#             */
/*   Updated: 2023/11/06 15:02:31 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int n, size_t size)
{
	size_t	i;
	char	c;

	i = 0;
	c = (char)n;
	while (i < size)
	{
		if (((char *)str)[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
