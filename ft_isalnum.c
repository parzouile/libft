/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:53:32 by aschmitt          #+#    #+#             */
/*   Updated: 2023/08/07 20:53:32 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d ", ft_isalnum(argv[1][0]));
	return 0;
}*/