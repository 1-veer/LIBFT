/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:05 by abougati          #+#    #+#             */
/*   Updated: 2024/11/05 11:40:08 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new )
        return ;

    new->next = *lst;   //assigne the the new_node's next(pointer) to point to the old head of the linked list
    *lst = new ;         // assigning the head to point to new now , so new is the head  
                        // N.B : head == the first link of a list.
                                 //since new is just a pointer to a node not a node itself. 
}

