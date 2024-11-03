/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:01 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 13:24:05 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;

    if(*lst==NULL)     //incase the linked list is empty
    {
        *lst=new;
        new->next=NULL;
        return;
    }
    t_list *temp;   //using a temp so we don't loose the refernce to our head (first link)

    temp= *lst;     // temp = the pointer to the head (lst) , but sine lst is a double pointer we use (*lst)
    
    while(temp->next != NULL)
        temp=temp->next;
    
    new->next=NULL;
    temp->next=new;
    
}
