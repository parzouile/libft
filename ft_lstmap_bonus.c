/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:30:50 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/09 13:30:50 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	res = malloc(sizeof(t_list));
	if (!res || !lst || !f || !del)
		return (NULL);
	res->content = lst->content;
	res->next = NULL;
	temp = res;
	while (lst != NULL && lst->next != NULL)
	{
		if (!temp)
			return (NULL);
		temp->next = ft_lstnew(f(lst->next->content));
		lst = lst->next;
	}
	return (res);
}