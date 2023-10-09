/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:26:55 by aschmitt          #+#    #+#             */
/*   Updated: 2023/09/28 11:26:55 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_aux(char c, char	*s)
{
	size_t	i;
	char	*new_s;

	new_s = malloc(sizeof(char) * (ft_strlen(s) + 2));
	if (!new_s)
		return (NULL);
	new_s[0] = c;
	i = 0;
	while (s[i])
	{
		new_s[i + 1] = s[i];
		i ++;
	}
	new_s[i + 1] = 0;
	free(s);
	return (new_s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;

	if (n == 0)
		return ("0");
	sign = 0;
	if (n < 0)
		sign = 1;
	s = malloc(sizeof(char));
	s[0] = 0;
	while (n / 10 != 0 || n % 10 != 0)
	{
		if (n % 10 < 0)
			s = ft_aux((-(n % 10)) + '0', s);
		else
			s = ft_aux((n % 10) + '0', s);
		if (!s)
			return (NULL);
		n = n / 10;
	}
	if (sign)
		s = ft_aux('-', s);
	return (s);
}
