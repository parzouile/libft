/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 01:29:35 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/10 01:29:35 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *str, int c )
{
	int	i;
	int	a;

	i = 0;
	a = -1;
	while (str[i])
	{
		if (str[i] == c)
			a = i;
		i ++;
	}
	if (c == 0)
		return (0);
	if (a == -1)
		return (NULL);
	return ((char *)str + a);
}
