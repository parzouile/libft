/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:20:18 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/08 12:20:18 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = dest;
	s = src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i ++;
		}
	}
	else if (d > s)
	{
		i = n - 1;
		while (i > 0)
		{
			d[i] = s[i];
			i --;
		}
	}
	return (dest);
}
