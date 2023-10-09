/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:11:58 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/10 17:11:58 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*result;
	size_t	i;

	i = 0;
	result = malloc(elementCount * elementSize);
	if (!result)
		return (NULL);
	while (i < elementCount)
	{
		((unsigned char *)result)[i] = 0;
		i ++;
	}
	return (result);
}
