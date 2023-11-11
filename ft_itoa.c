/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:51 by aschmitt          #+#    #+#             */
/*   Updated: 2023/11/08 01:17:31 by aschmitt         ###   ########.fr       */
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
	return (new_s);
}

char	*itoa0(void)
{
	char	*s;

	s = malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	s[0] = '0';
	s[1] = 0;
	return (s);
}

int	count_n(int n)
{
	int	result;

	result = 1;
	if (n < 0)
	{
		n = n * (-1);
		result = 2;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		result ++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		i;

	if (n == 0)
		return (itoa0());
	sign = 0;
	i = count_n(n);
	if (n < 0)
		sign = 1;
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = 0;
	while (n / 10 != 0 || n % 10 != 0)
	{
		if (n % 10 < 0)
			s[i--] = (-(n % 10)) + '0';
		else
			s[i--] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		s[n] = '-';
	return (s);
}
