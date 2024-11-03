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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list* new_list;
    t_list* saved_head;
    
    if(!lst || !f || !del)
        return NULL;
    
    new_list = ft_lstnew (f(lst->content));     //applying f on the first node of the list , i mean the first list of our linked list
        if(!new_list)
            return NULL;
    saved_head=new_list;    // and here we save it to return it afterwards

    lst = lst->next;     //moving lst to the next node before the loop
    while(lst!=NULL)
    {
        new_list->next =ft_lstnew (f(lst->content));
        if(!new_list->next)
           {
            ft_lstclear(&saved_head , del); //if ft_lstnew failed meaning that (*f) has failed we clear the list.
            return NULL; 
            }
        new_list = new_list->next;    //moving newlist and lst to the next ones for the loop
        lst = lst->next;
    }
    return (saved_head);            
}

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
        content = f(lst->content);
        if (!(new_list->next = ft_lstnew(content)))
        {
            del(content);
            ft_lstclear(&saved_head, del);
            return (NULL);
        }
        new_list = new_list->next;
        lst = lst->next;
    }
    return (saved_head);
}