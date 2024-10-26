/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:18 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 13:01:57 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return NULL;
    
    t_list* pointer;
    
    pointer = lst;
    
    while(pointer->next != NULL)     //looping until the next node is null , so we return the address of the current node before it.
        pointer=pointer->next;

    return (pointer);
}