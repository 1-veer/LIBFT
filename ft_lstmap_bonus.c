/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:21 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 17:00:37 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *saved_head;
    void *temp;

    if (!lst || !f || !del)
        return (NULL);
    temp = f(lst->content);   //to prevent memory leak , cuz when we use ft_lstnew , we create a new node by the transformed content when applying f() , that transformed content is allocated sepreatly , so if ft_lstnew fails we can't free that content cuz we have no pointer to it , here comes temp , cuz we should free everything if a function fails
    if (!(new_list = ft_lstnew(temp)))       // (suite)  when we dont apply f , we create a new node by ft_lstnew , and copy its pointer since it's same content ...
    {
        del(temp);
        return (NULL);
    }
    saved_head = new_list;
    lst = lst->next;
    while (lst)
    {
        temp = f(lst->content);
        if (!(new_list->next = ft_lstnew(temp)))
        {
            del(temp);
            ft_lstclear(&saved_head, del);
            return (NULL);
        }
        new_list = new_list->next;
        lst = lst->next;
    }
    return (saved_head);
}
