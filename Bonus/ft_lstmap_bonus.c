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
    if(!lst || !f || !del)
        return NULL;
    
    t_list* new_list;
    t_list* saved_list;
    
    new_list = ft_lstnew (f(lst->content));     //applying f on the first node of the list , i mean the first list of our linked list
        if(!new_list)
            return NULL;
    saved_list=new_list;    // and here we save it to return it afterwards

    lst = lst->next;     //moving lst to the next node before the loop
    while(lst)
    {
        new_list->next =ft_lstnew (f(lst->content));
        if(!new_list->next)
           {
            ft_lstclear(&saved_list , del); //if ft_lstnew failed meaning that (*f) has failed we clear the list.
            return NULL; 
            }
        new_list = new_list->next;    //moving newlist and lst to the next ones for the loop
        lst = lst->next;
    }

    return (saved_list);
            
}