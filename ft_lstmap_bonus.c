/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:21 by abougati          #+#    #+#             */
/*   Updated: 2024/11/13 17:14:01 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*creating_node(void *content, void (*del)(void *))
{
	t_list	*new_node;

	new_node = ft_lstnew(content);
	if (!new_node)
	{
		del(content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*saved_head;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = f(lst->content);
	new_list = creating_node(temp, del);
	if (!new_list)
		return (NULL);
	saved_head = new_list;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst->content);
		new_list->next = creating_node(temp, del);
		if (!new_list->next)
		{
			ft_lstclear(&saved_head, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (saved_head);
}
